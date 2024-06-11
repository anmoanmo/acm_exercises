//
// Created by 27188 on 24-6-11.
//
#include<bits/stdc++.h>
using namespace std;

void sol(){
    int a,b;cin>>a>>b;
    int ans = 0;
    int f = 0;
    if(b%2==0){
        ans += b/2;
        f = 15 * ans - ans * 4 * 2;
    }else{
        ans += b/2 + 1;
        f = 15 * ans - ((ans-1) * 4 * 2 + 4);
    }
    a -= f;
    while(1){
        if(a<=0){
            break;
        }
        a -= 15;
        ans +=1;
    }
    cout<<ans<<endl;
}

int main(){
    int t=0;cin>>t;
    while(t--){
        sol();
    }
}