//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-12.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 2000010;
using namespace std;
ll n, s[N], q[N], a[N];

void sol() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (i != n) {
            a[i + n] = a[i]; //破环成链
        }
    }
    for (int i = 1; i <= 2 * n - 1; i++) {
        s[i] = s[i - 1] + a[i]; //前缀和
    }
    int h = 1, t = 0, res = 0;
    for (int i = 1; i <= 2 * n - 1; i++) {
        //维护长度为n的单调队列，获得其中的最小值。
        while (h <= t && q[h] <= i - n) {
            h++;
        }
        while (h <= t && s[q[t]] >= s[i]) {
            t--;
        }
        q[++t] = i;
        //区间内最小s[i]-s[i-n]>=0时，此排序可选
        if (i >= n && s[q[h]] - s[i - n] >= 0) {
            res++;
        }
    }
    cout << res << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}