//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-18.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 1e5;
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<int> v(2 * n);
    //初始化
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        v[i + n] = v[i];
    }
    int i = 0, j = 1, k = 0;
    while (i < n && j < n) {
        for (k = 0; k < n && v[i + k] == v[j + k]; k++);
        v[i + k] > v[j + k] ? i = i + k + 1 : j = j + k + 1;
        if (i == j) {
            j++;
        }
    }
    for (int f = min(i, j); f < min(i, j) + n; f++) {
        cout << v[f] << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}