//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-12.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 3e5 + 10;
using namespace std;
int n, res = -1e9;
vector<int> a(N);
size_t m;

void find_max_sequnce() {
    deque<int> dq;
    int cur = 0;
    for (int i = 1; i <= n; i++) {
        while (!dq.empty() && dq.front() <= 0) {
            cur -= dq.front();
            dq.pop_front();
        }
        if(cur + a[i] <= a[i]){
            dq.clear();
            dq.push_back(a[i]);
            cur = a[i];
        }else{
            cur += a[i];
            dq.push_back(a[i]);
        }
        res = max(res,cur);
        if(dq.size() == m){
            cur -= dq.front();
            dq.pop_front();
        }
    }
}

void sol() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    find_max_sequnce();
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}