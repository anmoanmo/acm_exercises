//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-16.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int a,b,c;cin>>a>>b>>c;
    if(a<b&&b<c){
        cout<<"STAIR"<<'\n';
    }
    else if(a<b&&b>c){
        cout<<"PEAK"<<'\n';
    }else{
        cout<<"NONE"<<"\n";
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