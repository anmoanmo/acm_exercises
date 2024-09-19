//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-6.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    vector<int> v1(6), v2(6);
    for (auto &i: v1) {
        cin >> i;
    }
    for (auto &i: v2) {
        cin >> i;
    }
    int f1 = 0, f2 = 0, f3 = 0;
    for (int x = v1[0] + 1; x < v1[3]; x++) {
        if (x >= v2[0] && x <= v2[3]) {
            f1 = 1;
            break;
        }
    }
    for (int x = v1[1] + 1; x < v1[1 + 3]; x++) {
        if (x >= v2[1] && x <= v2[1 + 3]) {
            f2 = 1;
            break;
        }
    }
    for (int x = v1[2] + 1; x < v1[2 + 3]; x++) {
        if (x >= v2[2] && x <= v2[2 + 3]) {
            f3 = 1;
            break;
        }
    }
    if (f1 && f2 && f3) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}