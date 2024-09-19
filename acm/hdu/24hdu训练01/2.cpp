//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-19.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

struct node {
    double a, b, c, d, min1, flag;
};

void sol() {
    int n, k;
    cin >> n >> k;
    vector<node> v(n);
    for (auto &i: v) {
        cin >> i.a >> i.b >> i.c >> i.d;

    }
    for(int i=(k%4==0?k/4:k/4+1);i<=n;i++){

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