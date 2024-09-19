//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-11.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e6 + 10;
using namespace std;
int n, k;
int v[N];

void find_max() {
    deque<int> dq;
    for (int i = 1; i <= n; i++) {
        while (!dq.empty() && v[dq.back()] <= v[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i < k) {
            continue;
        }
        cout << v[dq.front()] << ' ';
        if (i - k + 1 == dq.front()) {
            dq.pop_front();
        }
    }
    cout << '\n';
}

void find_min() {
    deque<int> dq;
    for (int i = 1; i <= n; i++) {
        while (!dq.empty() && v[dq.back()] >= v[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i < k) {
            continue;
        }
        cout << v[dq.front()] << ' ';
        if (i - k + 1 == dq.front()) {
            dq.pop_front();
        }
    }
    cout << '\n';
}

void sol() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    find_min();
    find_max();

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}