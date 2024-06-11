//
// Created by 27188 on 24-6-11.
//
#include<bits/stdc++.h>
using namespace std;

void sol() {
    int n = 0; cin >> n;
    int max1 = INT_MIN;
    long long sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        sum += x;
        if (x > max1) {
            max1 = x;
        }
        if (max1 == (sum - max1)) {
            ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    int t = 0; cin >> t;
    while (t--) {
        sol();
    }
}
