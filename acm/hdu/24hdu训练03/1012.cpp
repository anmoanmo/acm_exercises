//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-26.
//


#include<iostream>
#include<algorithm>
using namespace std;
using LL = long long;

const int N =  1e5 + 10;
int a[N];
void solve()
{
    int n, L, D;
    cin >> n >> L >> D;
    int x;
    cin >> x;
    for(int i = 1; i < n; i ++) cin >> a[i];
    sort(a + 1, a + n + 1);
    int mx = a[n - 1];
    bool ok = 1;
    if(x >= L && x - a[1] <= D) ok = 0;
    else if(a[3] >= L) ok = 0;
    else if(max(mx, x) - min(a[1], x) <= D) ok = 0;
    else{
        int cnt = 0;
        for(int i = 1; i <= 2; i ++) if(a[i] >= L) cnt ++;
        if(mx >= L) cnt ++;
        if(x >= L) cnt ++;
        if(cnt > 1) ok = 0;
    }

    cout << (ok ? "Yes" : "No") << '\n';
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int Case; cin >> Case;
    while(Case --) solve();
    return 0;
}