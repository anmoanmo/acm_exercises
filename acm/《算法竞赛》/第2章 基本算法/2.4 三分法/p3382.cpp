//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-21.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;
const double eps = 1e-6;

void sol() {
    int n;
    double l, r;
    cin >> n >> l >> r;
    vector<double> v(n + 1);
    for (int i = n; i >= 0; i--) {
        cin >> v[i];
    }

    auto check = [&](double x) {
        double s = 0;
        for (int i = n; i >= 0; i--) {
            s = s * x + v[i];
        }
        return s;
    };


    for (int i = 0; i < 100; i++) {
        double k = (r - l) / 3.0;
        double mid1 = l + k, mid2 = r - k;
        if (check(mid1) > check(mid2)) {
            r = mid2;
        } else {
            l = mid1;
        }
    }
    cout << fixed << setprecision(5) << l << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}