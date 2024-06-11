//
// Created by 27188 on 24-6-8.
//
#include<bits/stdc++.h>
using namespace std;

int sol(){
    int n =0; cin>>n;
    while(n+1){
        n--;
        string s; cin>>s;
        bool ans = true;
        for(int i =0,j=s.size()-1;i<j;i++,j--){
            if(s[i] != s[j]){
                ans = false;
                break;
            }
        }
        if(ans){
            printf("yes");
        }
        else{
            printf("no");
        }
    }
}

int main(){
    sol();
    return 0;
}