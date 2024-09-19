//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-17.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n,f;cin>>n>>f;
    vector<ll> v(n);
    ll l=0,r=0;
    for(auto& i:v){
        cin>>i;
        l = max(l,i);
        r += i;
    }

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