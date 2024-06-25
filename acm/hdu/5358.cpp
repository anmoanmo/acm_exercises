//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-23.
//


#include<iostream>
#include<vector>
#include<cmath>

#define ll long long
using namespace std;

void sol() {
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        a[i] = v[i-1] + a[i-1];
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            ans += (abs(int(log2(a[j+1]-a[i])))+1)*(i+j+2);
        }
    }
    cout<<ans<<'\n';
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