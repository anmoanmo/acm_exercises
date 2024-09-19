//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-6.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int k, n, x;
    cin >> n >> k >> x;
    vector<int> v(n + 1);
    for (int i = 0; i <= n; i++) {
        if (i == k) {
            v[i] = x;
            continue;
        }
        cin >> v[i];
    }
    for(auto i:v){
        cout<<i<<' ';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}