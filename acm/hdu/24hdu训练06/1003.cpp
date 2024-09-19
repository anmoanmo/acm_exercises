//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-5.
//


#include<bits/stdc++.h>

using namespace std;
#define ll long long


void sol() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    pair<int, int> fx[4] = {{1,  0},
                            {0,  1},
                            {-1, 0},
                            {0,  -1}};

    map<pair<int, int>, int> m;
    int idx = 0;
    m[{0, 0}] = 1;
    bool ok = 1;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (i != 0) {
            x += fx[idx].first;
            y += fx[idx].second;
            m[{x, y}]++;

            if (m[{x, y}] > 1) {
                cout << -1 << '\n';
                return;
            }
        }
        if (s[i] == 'S') {
            continue;
        } else if (s[i] == 'L') {
            idx = idx == 0 ? 3 : idx - 1;
        } else {
            idx++;
            idx %= 4;
        }
    }
    if (x + fx[idx].first == 0 && y + fx[idx].second == 0 && idx == 0) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }

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
