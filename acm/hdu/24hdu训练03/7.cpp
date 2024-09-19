//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-26.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<ll> v(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;
        if (x == 1) {
            int l, r, t;
            cin >> l >> r >> t;
            for (int i = l; i <= r; i++) {
                v[i] += t;
            }
        } else {
            int l, r;
            cin >> l >> r;
            bool ok = 1;
            if (x == 2) {
                for (int i = l; i < r; i++) {
                    if (v[i] != v[i + 1]) {
                        ok = 0;
                        break;
                    }
                }
                if (ok) {
                    cout << 1 << '\n';
                } else {
                    cout << 0 << '\n';
                }
            } else if (x == 3) {
                for (int i = l; i < r; i++) {
                    if (v[i] >= v[i + 1]) {
                        ok = 0;
                        break;
                    }
                }
                if (ok) {
                    cout << 1 << '\n';
                } else {
                    cout << 0 << '\n';
                }
            } else if (x == 4) {
                for (int i = l; i < r; i++) {
                    if (v[i] <= v[i + 1]) {
                        ok = 0;
                        break;
                    }
                }
                if (ok) {
                    cout << 1 << '\n';
                } else {
                    cout << 0 << '\n';
                }
            } else if (x == 5) {
                int increse = 0, decrese = 0;
                int f = 0;
                for (int i = l; i < r; i++) {
                    if (f == 0) {
                        if (v[i] >= v[i + 1]) {
                            f++;
                            if(v[i]!=v[i+1]){
                                decrese++;
                            }
                        } else {
                            increse++;
                        }
                    } else {
                        if (v[i] <= v[i + 1]) {
                            ok = 0;
                            break;
                        } else {
                            decrese++;
                        }
                    }
                }
                if (ok && increse != 0 && decrese != 0) {
                    cout << 1 << '\n';
                } else {
                    cout << 0 << '\n';
                }
            }
        }

    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}