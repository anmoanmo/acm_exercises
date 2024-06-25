//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-22.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int f=-1,index=0;
    for(auto i:v){
        if(i!=f){
            index++;
            f = i;
        }
        if(index==k){
            cout<<i<<'\n';
            return;
        }
    }
    cout<<"NO RESULT"<<'\n';
    return;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 0;
//    std::cin >> t;
//    while (t--) {
//        sol();
//    }
    sol();
}