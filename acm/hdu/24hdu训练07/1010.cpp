//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-9.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    ll n, x1, k;
    cin >> n >> x1 >> k;
    ll x = x1;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    priority_queue<ll> maxHeap;
    for (int i = 0; i < n; i++) {
        x -= a[i];
        ans++;
        maxHeap.push(a[i]);
        while (x <= 0 && k > 0) {
            x += maxHeap.top();
            maxHeap.pop();
            k--;
        }
        if(x<=0){
            ans--;
            break;
        }
    }

    cout << ans << '\n';
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