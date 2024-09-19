//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-6.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;
const int N = 1e6;
int dp[N];


void sol() {
    int n;cin>>n;
    memset(dp,0, sizeof(dp));
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    auto fc = [&](int x){
        if(x>n){
            return n+1;
        }else{
            return dp[x];
        }
    };
    for(int i=n-1;i>=0;i--){
        dp[i] = min(dp[i+1]+1,fc(i+v[i]+1));
    }
    cout<<dp[0]<<'\n';

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