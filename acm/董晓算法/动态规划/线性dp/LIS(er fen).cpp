//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-25.
//


#include<bits/stdc++.h>

typedef unsigned long long ULL;
typedef long long LL;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;
int b[N];
int ans;

void find_min(int x) {
    int l = 0, r = ans;
    while (r > l) {
        int mid = l + r >> 1;
        if (b[mid] >= x) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    b[r] = x;
    ans = max(r, ans);
}

void sol() {
    int n;
    cin >> n;
    int x;
    ans = 0;
    b[0] = -1;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if(x>b[ans]){
            b[++ans] = x;
        }else{
            find_min(x);
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}