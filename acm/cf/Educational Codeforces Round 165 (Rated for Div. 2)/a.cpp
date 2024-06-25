//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-25.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(v[v[i]-1]==(i+1)){
            ans++;
        }
    }
    if(ans>0){
        cout<<2<<'\n';
    }
    else{
        cout<<3<<'\n';
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