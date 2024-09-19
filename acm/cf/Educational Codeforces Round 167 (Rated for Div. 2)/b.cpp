//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-28.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    string a, b;
    cin >> a >> b;
    int ans = b.size();
    for (int i = 0; i < b.size(); i++) {
        int k = i;
        for (int j = 0; j < a.size(); j++) {
            if (k < b.size() && a[j] == b[k]) {
                k++;
            }
        }
        ans = min(ans, i+int(b.size()) - k);
    }
    cout << ans + a.size() << '\n';
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