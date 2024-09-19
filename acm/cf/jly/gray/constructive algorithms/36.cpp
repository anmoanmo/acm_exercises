//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-17.
//

#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

void sol() {
    string s;
    cin>>s;
    int n = s.size();
    if(s == "()"){
        cout<<"NO"<<'\n';
        return;
    }
    cout<<"YES\n";
    bool f = false;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            f = true;
            break;
        }
    }
    if(f){
        for(int i=1;i<=n;i++){
            cout<<"()";
        }
        cout<<"\n";
        return;
    }else{
        for(int i=1;i<=2*n;i++){
            cout<<(i<=n?'(':')');
        }
        cout<<'\n';
        return;
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