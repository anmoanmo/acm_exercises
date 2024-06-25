//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-14.
//
#include<bits/stdc++.h>

#define ll long long

using namespace std;

void sol() {
    int x,y;cin>>x>>y;
    int ans;
    if(y == 0 || y == 1) ans = 4 - x;
    else ans = (3 - x) * 2;

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}