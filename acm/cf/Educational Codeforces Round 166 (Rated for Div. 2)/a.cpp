//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-23.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;cin>>n;
    vector<char> s(n);
    for(auto& c:s){
        cin>>c;
    }
    auto s1 = s;
    sort(s.begin(),s.end());
    if(s1==s){
        cout<<"YES"<<'\n';
    }else{
        cout<<"NO"<<'\n';
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