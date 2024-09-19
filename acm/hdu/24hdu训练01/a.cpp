//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-19.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

struct node {
    double a, b, c, d, min1, flag;
};

void sol() {
    int n, k;
    cin >> n >> k;
    vector<node> v(n);
    for (auto &i: v) {
        cin >> i.a >> i.b >> i.c >> i.d;
        i.b /= 2;
        i.c /= 3;
        i.d /= 4;
        i.min1 = min(i.a, min(i.b, (min(i.c, i.d))));
        if (i.a == i.min1) {
            i.flag = 1;
        } else if (i.b == i.min1) {
            i.flag = 2;
        } else if (i.c == i.min1) {
            i.flag = 3;
        } else if (i.d == i.min1) {
            i.flag = 4;
        }
    }
    sort(v.begin(), v.end(), [](node a, node b) {
        return a.min1 < b.min1;
    });
    int ans = 0;
    for (auto i: v) {
        if (k == 0) {
            break;
        }
        if (k - i.flag < 0) {
            continue;
        } else {
            k -= i.flag;
            ans += i.min1 * i.flag;
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