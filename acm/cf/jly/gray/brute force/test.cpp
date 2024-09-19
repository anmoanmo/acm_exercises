//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-1.
//


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    long long ans=1;
    for(int i=0;i<n;i++){
        ans*=2;
    }
    cout<<ans;
    return 0;
}