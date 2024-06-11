//
// Created by 27188 on 24-6-10.
//
#include<bits/stdc++.h>
using namespace std;
void sol(){
    int n=0;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b(n-1);
    for(int i=0;i<n-1;i++){
        b[i] = gcd(a[i],a[i+1]);
    }
    int bad = 0;
    for(int i=1;i<n-1;i++){
        bad += b[i] < b[i - 1];
    }

    int ans = 0;
    if((bad-(b[1]<b[0])==0)||(bad-(b[n-2]<b[n-3])==0)){
        ans = 1;
    }

    for(int i=1;i<n-1;i++){
        int c = bad;
        c -= b[i]<b[i-1];
        int g = gcd(a[i-1],a[i+1]);
        if(i-1>0){
            c -=b[i-1]<b[i-2];
            c += g<b[i-2];
        }
        if(i+1<n-1){
            c -= b[i+1]<b[i];
            c += b[i+1]<g;
        }
        if (c==0){
            ans = 1;
        }
    }
    if(ans){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

}

int main(){
    int t=0;cin>>t;
    while(t--){
        sol();
    }
    return 0;
}