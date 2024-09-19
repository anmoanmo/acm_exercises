//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-17.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n, f;
    cin >> n >> f;
    vector<double> v(n);
    double l = 1e9 + 5, r = 0;
    for (auto &i: v) {
        cin >> i;
        r = max(r, i);
        l = min(l, i);
    }

    auto check = [&](auto mid) {
        for (int i = f; i <= n; i++) {
            for (int j = 0; j <= n - i; j++) {
                vector<double>::iterator it = v.begin() + j;
                double ans = accumulate(it, it + i, 0);
                if (ans >= mid*i) {
                    return true;
                }
            }
        }
        return false;
    };

    for(int i=0;i<=100;i++) {
        double mid = l+ (r-l)/2;
        if (check(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << int(l * 1000) << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}

