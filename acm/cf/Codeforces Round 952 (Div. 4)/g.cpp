#include <bits/stdc++.h>
const int MOD = 1e9 + 7;
#define LL long long
using namespace std;

LL qpow(LL a, int n)
{
    LL ret = 1;
    while(n){
        if(n & 1) ret = ret * a % MOD;
        a = a * a % MOD;
        n >>= 1;
    }
    return ret % MOD;
}
void solve()
{
    int l, r, k; cin >> l >> r >> k;
    if(k > 9){
        cout << 0 << '\n';
        return ;
    }
    int x[] = {0, 9, 4, 3, 2, 1, 1, 1, 1, 1};
    int a = x[k];
    //cout << a << '\n';

    LL ans = qpow(a + 1, r) - qpow(a + 1, l);

    cout << (ans + MOD) % MOD << '\n';
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 0;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}