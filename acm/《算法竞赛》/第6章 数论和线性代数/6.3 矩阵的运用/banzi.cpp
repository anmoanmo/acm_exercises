#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
const int mod = 1000000000;

struct matrix {
    ll c[6][6];

    matrix() {
        memset(c, 0, sizeof c);
    }

    matrix operator*(const matrix &b) const {
        matrix t;
        for (int i = 1; i <= 5; ++i) {
            for (int j = 1; j <= 5; ++j) {
                for (int k = 1; k <= 5; ++k) {
                    t.c[i][j] = (t.c[i][j] + c[i][k] * b.c[k][j] % mod) % mod;
                }
            }
        }
        return t;
    }
};

void quickpow(matrix &A, ll n, matrix &res) {
    while (n) {
        if (n & 1) {
            res = res * A;
        }
        A = A * A;
        n >>= 1;
    }
}

void sol() {
    ll n;
    cin >> n;
    vector<ll> v = {1, 1, 2, 4, 8};

    if (n <= 5){
        cout << v[n - 1] << endl;
        return;
    }

    matrix A;
    A.c[1][1] = A.c[1][2] = A.c[1][3] = A.c[1][4] = A.c[1][5] = 1;
    A.c[2][1] = A.c[3][2] = A.c[4][3] = A.c[5][4] = 1;

    matrix res;
    for (int i = 1; i <= 5; i++) {
        res.c[i][i] = 1;
    }

    quickpow(A, n-5, res);

    ll ans = 0;
    for (int i = 1; i <= 5; i++) {
        ans = (ans + res.c[1][i] * v[5 - i] % mod) % mod;
    }
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        sol();
    }

    return 0;
}
