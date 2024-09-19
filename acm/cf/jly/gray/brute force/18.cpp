//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-27.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    string s[3];
    for (int i = 0; i < 3; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < 3; i++) {
        if (s[i][0] == s[i][1] && s[i][1] == s[i][2] && s[i][0] != '.') {
            cout << s[i][0] << "\n";
            return;
        }
        if (s[0][i] == s[1][i] && s[1][i] == s[2][i] && s[0][i] != '.') {
            cout << s[0][i] << "\n";
            return;
        }
    }
    if (s[0][0] == s[1][1] && s[1][1] == s[2][2] && s[0][0] != '.') {
        cout << s[0][0] << "\n";
        return;
    }
    if (s[0][2] == s[1][1] && s[1][1] == s[2][0] && s[0][2] != '.') {
        cout << s[0][2] << '\n';
        return;
    }
    cout << "DRAW\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        sol();
    }
}