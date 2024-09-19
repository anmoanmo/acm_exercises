//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-4.
//


#include<cstdio>
#include<iostream>
using namespace std;
typedef long long ll;
const int maxn = 100005;
ll n, k, cnt, a[maxn], b[maxn];

void merge_sort(ll l, ll r) {
    if (l >= r) {
        return;
    }
    ll mid = l + r >> 1;
    merge_sort(l, mid);
    merge_sort(mid + 1, r);

    ll idx = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r) {
        if (a[i] > a[j]) {
            b[idx++] = a[j++];
            cnt += mid - i + 1;
        } else {
            b[idx++] = a[i++];
        }
    }

    while (i <= mid) {
        b[idx++] = a[i++];
    }
    while (j <= r) {
        b[idx++] = a[j++];
    }
    for (int i = 0; i < idx; i++) {
        a[i + l] = b[i];
    }
}


int main() {

    while (~scanf("%lld%lld", &n, &k)) {
        cnt = 0;
        for (ll i = 0; i < n; i++)scanf("%lld", &a[i]);
        merge_sort(0, n - 1);
        if (cnt <= k) {
            cout << 0 << '\n';
        } else {
            cout << cnt  - k  << '\n';
        }
    }
    return 0;
}