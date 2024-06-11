#include <iostream>
#include <vector>
using namespace std;

void sol(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix1(n, vector<int>(m));
    vector<vector<int>> matrix2(n, vector<int>(m));
    vector<int> row(n * m), col(n * m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix1[i][j];
            int index = --matrix1[i][j];
            row[index] = i;
            col[index] = j;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix2[i][j];
            matrix2[i][j]--;
        }
    }

    for (int i = 0; i < n; i++) {
        int r = row[matrix2[i][0]];
        if (r != i) {
            swap(matrix1[i], matrix1[r]);
            for (int j = 0; j < m; j++) {
                row[matrix1[i][j]] = i;
                row[matrix1[r][j]] = r;
            }
        }
    }

    for (int j = 0; j < m; j++) {
        int c = col[matrix2[0][j]];
        if (c != j) {
            for (int i = 0; i < n; i++) {
                swap(matrix1[i][j], matrix1[i][c]);
                col[matrix1[i][j]] = j;
                col[matrix1[i][c]] = c;
            }
        }
    }

    if (matrix1 == matrix2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        sol();
    }
    return 0;
}
