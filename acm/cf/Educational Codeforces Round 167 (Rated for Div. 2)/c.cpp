//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-28.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
    }
    for (int i = 0; i < n; i++) {
        cin >> v[i].second;
    }

    int s1 = 0, s2 = 0;
    vector<int> v1(n, 0);
    for (int i = 0; i < n; i++) {
        if (v[i].first >= 0 && v[i].second <= 0) {
            s1 += v[i].first;
            v1[i] = 1;
        } else if (v[i].first <= 0 && v[i].second >= 0) {
            s2 += v[i].second;
            v1[i] = 1;
        }
    }
    for (int i = 0; i < n; i++) {
        if (v1[i] == 0) {
            if (v[i].first == 1) {
                if (s1 > s2) {
                    s2++;
                } else {
                    s1++;
                }
            } else {
                if (s1 > s2) {
                    s1--;
                } else {
                    s2--;
                }
            }
        }
    }
    cout << min(s1, s2) << '\n';
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