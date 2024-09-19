//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-4.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;
const int N = 1e5;
int dp[N];
int sol(int n, int C) {
    for(int i=1;i<=n;i++){
        for(int j=C;j>=c[i];j--){
            dp[j] = max(dp[j],dp[j-c[i]]+w[i]);
        }
    }
    return dp[C];
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