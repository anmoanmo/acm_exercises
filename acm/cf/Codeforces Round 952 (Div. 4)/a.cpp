//
// Created by 27188 on 24-6-11.
//
#include<bits/stdc++.h>
using namespace std;

void sol(){
    string a,b;cin>>a>>b;
    char temp;
    temp = a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b<<endl;
}

int main(){
    int t=0;cin>>t;
    while(t--){
        sol();
    }
}