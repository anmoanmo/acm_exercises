//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-24.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    int ans = 1e9;
    string s;
    cin >> s;
    if (s.size() == 2) {
        cout << (s[0] - '0') * 10 + (s[1] - '0') << '\n';
        return;
    }
    if (s[0] == '0' || s[n - 1] == '0') {
        cout << 0 << '\n';
        return;
    }

    for(int i=0;i<n-1;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            if(j==i){
                v.push_back((s[j]-'0')*10+(s[++j]-'0'));
            }
            else{
                v.push_back((s[j]-'0'));
            }
        }
        sort(v.begin(),v.end());
        if(v[0]==0){
            cout<<0<<'\n';
            return;
        }
        int ans_cur = 0;
        for(auto c:v){
            if(c>1){
                ans_cur += c;
            }
        }
        if(ans_cur==0){
            ans_cur = 1;
        }
        ans = min(ans,ans_cur);
    }
    cout<<ans<<'\n';

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

