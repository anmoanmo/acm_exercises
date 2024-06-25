//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-16.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    ll n, k;
    cin >> n >> k;
    if(k%2!=0){
        cout << "NO\n";
        return;
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ans += abs(n-i-i+1);
    }
    if(ans<k){
        cout<<"NO\n";
        return;
    }
    vector<ll> v(n+1);
    for(int i=1;i<=n;i++){
        v[i] = i;
    }
    ll s=0;
    for(int i=1;i<=n;i++) v[i]=i;
    for(int i=1;i+i<=n;i++)
    {
        if(s+(n-i+1-i)*2<=k)
        {
            swap(v[i],v[n-i+1]);
            s+=(n-i+1-i)*2;
            continue;
        }
        swap(v[i],v[n-i+1-(s+(n-i+1-i)*2-k)/2]);
        break;
    }
    cout << "Yes\n";
    for(int i=1;i<=n;i++) cout << v[i] << " ";
    cout << "\n";
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

