//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-22.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    using namespace std;
    int n,m;cin>>n>>m;
    if(n<m||(n%2!=m%2)){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        return;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 0;
    std::cin >> t;
    while (t--) {
        sol();
    }
}