//
// Created by 27188 on 24-6-13.
//
#include<bits/stdc++.h>
using namespace std;

void sol() {
    int n=0;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long ans = 0;

    for(int l=0;l<2;l++){
        for(int r=l+1;r<3;r++){
            map<array<int, 2>, int> m;
            for(int i=0;i<n-2;i++){
                ans += m[{v[i+l],v[i+r]}]++;
            }
        }
    }
    map<array<int, 3>, int> m1;
    for(int i=0;i<n-2;i++){
        ans -= 3*m1[{v[i],v[i+1],v[i+2]}]++;
    }
    cout<<ans<<"\n";
}

int main() {
    int t = 0; cin >> t;
    while (t--) {
        sol();
    }
}
