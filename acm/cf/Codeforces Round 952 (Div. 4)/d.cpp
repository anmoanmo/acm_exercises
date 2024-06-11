//
// Created by 27188 on 24-6-11.
//
#include<bits/stdc++.h>
using namespace std;

void sol() {
    int n,m;cin>>n>>m;
    int x,y;
    int l=0;
    int l_max=0;
    vector matrix(n,vector<char>(m));
    int ans_x=0,ans_y=0;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        l=0;
        int begin=0,end=0;
        for(int j=0;j<m;j++){
            if(s[j] == '#'){
                l++;
                if(!begin){
                    begin=j;
                }
                end=j;
                x= i;
            }
        }
        if(l>l_max){
            l_max=l;
            ans_x=x;
            ans_y=(begin+end+2)/2;
        }
    }
    cout<<ans_x+1<<" "<<ans_y<<endl;
}

int main() {
    int t = 0; cin >> t;
    while (t--) {
        sol();
    }
}