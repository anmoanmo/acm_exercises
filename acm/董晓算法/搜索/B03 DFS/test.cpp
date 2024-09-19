//
// Created by ?(???)? on 24-8-15.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 1e5;
using namespace std;

void sol() {
    int n, k;
    cin >> n >> k;
    vector<int> v(k);
    int max1 = 0, ans = 0;
    int f = 0;
    for (int i = 0; i < k; i++) {
        cin >> v[i];
        if (v[i] > max1) {
            max1 = v[i];
            f = i;
        }
    }
    for (int i = 0; i < k; i++) {
        if (i == f) {
            continue;
        }
        if (v[i] == 1) {
            ans++;
        } else {
            ans += v[i] * 2 - 1;
        }
    }
    cout << ans << '\n';

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