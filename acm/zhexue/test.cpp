//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-18.
//

#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;
vector<char> s[3];
char goal[3];

void sol() {
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 3; i++) {
        cin >> goal[i];
        if (goal[i] == '0') {
            a = i;
        }
        if (goal[i] == '3') {
            b = i;
        }
        if (goal[i] == '4') {
            c = i;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            char x;
            cin >> x;
            s[i].push_back(x);
        }
    }
    bool flag;
    while (true) {
        flag = true;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                if (s[i][j] == goal[i]) {
                    flag = false;
                    break;
                }
            }
            if (!flag) {
                break;
            }
        }
        if (flag) {
            break;
        }

        int f = 0;
        int x1 = -1, x2 = -1, y1 = -1, y2 = -1;
        for (int i = 0; i < 2; i++) {
            if (s[a][i] == '0') {
                f++;
                cout << '0' << "->" << (i == 0 ? 'L' : 'R') << ' ';
                x1 = a, y1 = i;
            }
        }
        if (f == 1) {
            for (int i = 0; i < 3; i++) {
                if (i == x1) {
                    continue;
                }
                for (int j = 0; j < 2; j++) {
                    if (s[i][j] == goal[i]) {
                        f++;
                        cout << goal[i] << "->" << (i == 0 ? 'L' : 'R') << ' ';
                        x2 = i, y2 = j;
                    }
                }
                if (f == 2) {
                    swap(s[x1][y1], s[x2][y2]);
                    break;
                }
                for (int j = 0; j < 2; j++) {
                    if (s[i][j] != goal[a]) {
                        f++;
                        cout << goal[i] << "->" << (i == 0 ? 'L' : 'R') << ' ';
                        x2 = i, y2 = j;
                    }
                }
            }
            if (f == 2) {
                swap(s[x1][y1], s[x2][y2]);
                continue;
            }
        }
        //---------------
        for (int i = 0; i < 2; i++) {
            if (s[b][i] == '3') {
                f++;
                cout << '3' << "->" << (i == 0 ? 'L' : 'R') << ' ';
                x1 = b, y1 = i;
            }
        }
        if (f == 1) {
            for (int i = 0; i < 3; i++) {
                if (i == x1) {
                    continue;
                }
                for (int j = 0; j < 2; j++) {
                    if (s[i][j] == goal[i]) {
                        f++;
                        cout << goal[i] << "->" << (i == 0 ? 'L' : 'R') << ' ';
                        x2 = i, y2 = j;
                    }
                }
                if (f == 2) {
                    swap(s[x1][y1], s[x2][y2]);
                    break;
                }
                for (int j = 0; j < 2; j++) {
                    if (s[i][j] != goal[b]) {
                        f++;
                        cout << goal[i] << "->" << (i == 0 ? 'L' : 'R') << ' ';
                        x2 = i, y2 = j;
                    }
                }
            }
            if (f == 2) {
                swap(s[x1][y1], s[x2][y2]);
                continue;
            }
        }
        //--------------
        for (int i = 0; i < 2; i++) {
            if (s[c][i] == '4') {
                f++;
                cout << '4' << "->" << (i == 0 ? 'L' : 'R') << ' ';
                x1 = c, y1 = i;
            }
        }
        if (f == 1) {
            for (int i = 0; i < 3; i++) {
                if (i == x1) {
                    continue;
                }
                for (int j = 0; j < 2; j++) {
                    if (s[i][j] == goal[i]) {
                        f++;
                        cout << goal[i] << "->" << (i == 0 ? 'L' : 'R') << ' ';
                        x2 = i, y2 = j;
                    }
                }
                if (f == 2) {
                    swap(s[x1][y1], s[x2][y2]);
                    break;
                }
                for (int j = 0; j < 2; j++) {
                    if (s[i][j] != goal[c]) {
                        f++;
                        cout << goal[i] << "->" << (i == 0 ? 'L' : 'R') << ' ';
                        x2 = i, y2 = j;
                    }
                }
            }
            if (f == 2) {
                swap(s[x1][y1], s[x2][y2]);
                continue;
            }
        }

    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) {
        sol();
    }
}