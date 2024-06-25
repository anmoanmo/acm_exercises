//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-15.
//

// 数楼梯

//组合数学
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int fc(int a,int b){
    ll ans1=1,ans2=1;
    for(int i=a;i>(a-b);i--){
        ans1 *= i;
    }
    for(int i=1;i<=b;i++){
        ans2 *= i;
    }
    return ans1/ans2;
}

void sol() {
    int n=0;cin>>n;
    ll ans=0;
    ll flag= (n%2==1);
    for(int i=n-2*(n%2==1);i>=0;i-=2){
        ans += fc(i+flag,i);
        flag++;
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
//    int t = 0;10
//    cin >> t;
//    while (t--) {
//        sol();
//    }
    sol();
}

// 递归
