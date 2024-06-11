//
// Created by 27188 on 24-6-9.
//
#include<bits/stdc++.h>
using namespace std;

void sol() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;   cin >> n >> m;
        string s;   cin >> s;

        map<char, int> count;
        for (char c = 'A'; c <= 'G'; c++) {
            count[c] = 0;
        }
        for (char c : s) {
            if (c >= 'A' && c <= 'G') {
                count[c]++;
            }
        }

        int ans = 0;
        for (auto i:count) {
            if(i.second<m){
                ans += (m-i.second);
            }
        }
        cout << ans << endl;
    }
}

int main() {
    sol();
    return 0;
}


//#include<iostream>
//#include<cassert>
//using namespace std;
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int T;cin>>T;
//    for(;T--;)
//    {
//        int N,M;cin>>N>>M;
//        string A;cin>>A;
//        int cnt[7]={};
//        for(char c:A)cnt[c-'A']++;
//        int ans=0;
//        for(int i=0;i<7;i++)if(cnt[i]<M)ans+=M-cnt[i];
//        cout<<ans<<"\n";
//    }
//}

