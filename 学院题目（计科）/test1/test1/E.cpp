#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        int row = 2 * a - 1;

        for (int i = 1; i <= row; i++) {
            int stars =( (i <= a) ? 2 * i - 1 : 2 * (row - i) + 1);
            int spaces = (row - stars) / 2;
            for (int j = 0; j < spaces; j++) {
                cout << " ";
            }
            for (int j = 0; j < stars; j++) {
                cout << "*";
            }
            if (i != row) {
                cout << endl;
            }
        }
        if (t > 0) {
            cout << endl;
        }
    }

    return 0;
}
