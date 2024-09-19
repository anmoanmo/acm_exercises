//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-2.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n,k;cin>>n>>k;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>v[i].second;
    }
    sort(v.begin(),v.end());
    vector<pair<int,int>>::iterator it=v.begin();
    while(k>=it->first&&it!=v.end()){
        k+=it->second;
        it++;
    }
    cout<<k<<endl;
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