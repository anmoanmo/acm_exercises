//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-18.
//

//板子
#include<bits/stdc++.h>

typedef unsigned long long ULL;
typedef long long LL;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;
ULL p[N], h[N], s[N];
int n;

// 预处理 hash函数的前缀和
void init() {
    p[0] = 1, h[0] = 0;
    for (int i = 1; i <= n; i++) {
        p[i] = p[i - 1] * P;
        h[i] = h[i - 1] * P + s[i];
    }
}

// 计算s[l~r]的 hash值
ULL get(int l, int r) {
    return h[r] - h[l - 1] * p[r - l + 1];
}
//判断字符串是否相同
bool is_same(int l1,int r1, int l2, int r2){
    return get(l1,r1) == get(l2,r2);
}

void sol() {

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