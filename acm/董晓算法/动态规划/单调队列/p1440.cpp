//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-11.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e7;
using namespace std;
int a[N];
int n, k;

void find_min() {
    deque<int> dq;
    for (int i = 1; i <= n; i++) {
        if (i - 1 - k == dq.front()) {
            dq.pop_front();
        }
        if (i == 1) {
            cout << 0 << '\n';
        } else {
            cout << a[dq.front()] << '\n';
        }
        while (!dq.empty() && a[dq.back()] >= a[i]) {
            dq.pop_back();
        }
        dq.push_back(i);

    }
}

void sol() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    find_min();

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}