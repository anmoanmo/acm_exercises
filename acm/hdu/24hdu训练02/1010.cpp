//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-22.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    string s;
    map<char,int> m;
    cin>>s;
    for(auto i:s){
        m[i]++;
    }
    string s1;
    for(int i=0;i<8;i+=2){
        s1 +=s[i];
    }
    string s2;
    for(int i=0;i<4;i+=2){
        s2 +=s1[i];
    }

    if(s2[0]==s2[1]){
        cout<<s2[1]<<'\n';
    }
    else if(m[s2[0]]==s2[1]){
        cout<<'N'<<'\n';
    }else{
        if(m[s2[0]]>m[s2[1]]){
            char ans = s2[0];
            cout<<ans<<'\n';
        }else{
            char ans = m[s2[1]];
            cout<<ans<<'\n';
        }
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