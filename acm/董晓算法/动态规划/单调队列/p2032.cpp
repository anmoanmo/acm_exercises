//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-12.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e7;
using namespace std;
int n, k;
int a[N];

void sol() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    deque<int> dq;
    for (int i = 1; i <= n; i++) {
        while (!dq.empty() && a[dq.back()] <= a[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i < k) {
            continue;
        }
        if (i - k == dq.front()) {
            dq.pop_front();
        }
        cout << a[dq.front()] << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}