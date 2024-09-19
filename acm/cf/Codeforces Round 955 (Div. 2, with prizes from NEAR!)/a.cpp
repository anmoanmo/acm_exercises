//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-25.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;
void sol() {
    ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    if (((y1>x1)&&(x2>y2))||((x1>y1)&&(y2>x2))){
        cout<<"NO"<<'\n';
    }else{
        cout<<"YES"<<'\n';
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