//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-19.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n,k;cin>>n>>k;
    ll ans=1;
    for(int i = 0; i < k; i ++){
        if(n >> i & 1){
            ans *= 12ll;
        }
        else{
            ans *= (ll)4;
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