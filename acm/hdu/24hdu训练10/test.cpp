//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-18.
//

#include<iostream>

using namespace std;
using LL = long long;
using ULL = unsigned long long;

const int N = 1e6 + 10;
string A, B;
int lenA, lenB;
int ne[N];

int kmp() {
    ne[0] = 0;
    for (int i = 1, j = 0; i < lenA; i++) {
        while (j > 0 && A[i] != A[j]) j = ne[j - 1];
        if (A[i] == A[j]) j++;
        ne[i] = j;
    }
    int ret = 0;
    for (int i = 0, j = 0; i < lenB; i++) {
        while (j > 0 && A[j] != B[i]) j = ne[j - 1];
        if (A[j] == B[i]) j++;
        if (j == lenA) ret++;
    }
    return ret;
}

ULL pw[N], hsA[N], hsB[N];
int P = 131;

void init() {
    pw[0] = 1;
    for (int i = 1; i < N; i++)
        pw[i] = pw[i - 1] * P;
}

ULL gethsA(int l, int r) {
    return hsA[r] - hsA[l] * pw[r - l];
}

ULL gethsB(int l, int r) {
    return hsB[r] - hsB[l] * pw[r - l];
}

void solve() {
    cin >> A >> B;
    if (A.size() > B.size()) swap(A, B);
    lenA = A.size(), lenB = B.size();
    int cnt = kmp();
    if (cnt == 1) {
        cout << lenB << '\n';
        return;
    }
    if (cnt > 1) {
        cout << -1 << '\n';
        return;
    }

    hsA[0] = hsB[0] = 0;
    for (int i = 0; i < lenA; i++) hsA[i + 1] = hsA[i] * P + A[i];
    for (int i = 0; i < lenB; i++) hsB[i + 1] = hsB[i] * P + B[i];
    int t = 0, ans = lenA + lenB, k = min(lenA, lenB);
    for (int len = k - 1; len; len--) {
        //cout << gethsA(lenA - len, lenA) << '\n' << gethsB(0, len) << "\n\n";
        if (gethsA(lenA - len, lenA) == gethsB(0, len)) t = max(t, len);
        if (gethsA(0, len) == gethsB(lenB - len, lenB)) t = max(t, len);
    }

    cout << ans - t << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    init();
    int Case;
    cin >> Case;
    while (Case--) solve();
    return 0;
}