//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-20.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n,x,y;cin>>n>>x>>y;
    vector<int> v(n+1);
    for(auto& i:v){
        i = 1;
    }
    int f=0;
    for(int i=x+1;i<=n;i++){
        f++;
        if(f%2==1){
            v[i] = -1;
        }
    }
    f=0;
    for(int i=y-1;i>=1;i--){
        f++;
        if(f%2==1){
            v[i] = -1;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<' ';
    }
    cout<<'\n';

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