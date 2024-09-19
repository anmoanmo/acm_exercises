//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-15.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    vector<int> a(6);
    for (auto &i: a) {
        cin >> i;
    }
    int sum_a = accumulate(a.begin(), a.end(), 0);
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = j + 1; k < 6; k++) {
                int sum_b = a[i] + a[j] + a[k];
                if (2 * sum_b == sum_a) {
                    cout << "YES" << '\n';
                    return;
                }
            }
        }
    }
    cout << "NO" << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}