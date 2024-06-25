//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-15.
//
#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int l,r;cin>>l>>r;
    int ans=0;
    for(int i=l;i<=r;i++){
        int f=i;
        while(f){
            if(f%10==2){
                ans++;
            }
            f/=10;
        }
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sol();
}