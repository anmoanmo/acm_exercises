//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-12.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 1e5;
using namespace std;

int find_1(string s) {
    int ans = 0;
    for (auto i: s) {
        if (i == '1') {
            ans++;
        }
    }
    return ans;
}

void sol() {
    int n;
    cin >> n;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int a = find_1(s1), b = find_1(s2), c = find_1(s3);

    int ans = 0;
    ans = min(n - a, a) + min(n - b, b) + min(n - c, c);

    cout << ans % n << '\n';

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