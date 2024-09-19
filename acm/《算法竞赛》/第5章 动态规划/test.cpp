#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define buff ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define ll long long
#define int ll
const int N = 2e5 + 7;

typedef long long LL;
const int mod = 1000000000;

struct matrix
{
    LL c[6][6];

    matrix()
    {
        memset(c, 0, sizeof c);
    }
} F, A;

matrix operator*(const matrix &a, const matrix &b)
{
    matrix t;
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 5; ++j)
        {
            for (int k = 1; k <= 5; ++k)
            {
                t.c[i][j] = (t.c[i][j] + a.c[i][k] * b.c[k][j] % mod) % mod;
            }
        }
    }
    return t;
}

//void quickpow(LL n)
//{
//    F.c[1][1] = 1, F.c[1][2] = 1, F.c[1][3] = 2, F.c[1][4] = 4, F.c[1][5] = 8;
//    memset(A.c, 0, sizeof(A.c));
//    A.c[1][1] = A.c[1][2] = A.c[1][3] = A.c[1][4] = A.c[1][5] = A.c[2][1] = A.c[3][2] = A.c[4][3] = A.c[5][4] = 1;
//    while (n)
//    {
//        if (n & 1)
//        {
//            F = F * A;
//        }
//        A = A * A;
//        n >>= 1;
//    }
//}
void quickpow(matrix &A, ll n, matrix &res) {
    while (n) {
        if (n & 1) {
            res = res * A;
        }
        A = A * A;
        n >>= 1;
    }
}

void solve()
{
    LL n;
    cin >> n;
//    if (n == 1 or n == 2)
//    {
//        cout << 1 << endl;
//        return;
//    }
//    else if (n == 3)
//    {
//        cout << 2 << endl;
//        return;
//    }
//    else if (n == 4)
//    {
//        cout << 4 << endl;
//        return;
//    }
//    else if (n == 5)
//    {
//        cout << 8 << endl;
//        cout << "---------------------------------------------" << endl;
//        return;
//    }
    vector<ll> v = {1, 1, 2, 4, 8};
    if (n <= 5) {
        v[n - 1];
        return;
    }

    A.c[1][1] = A.c[1][2] = A.c[1][3] = A.c[1][4] = A.c[1][5] = 1;
    A.c[2][1] = A.c[3][2] = A.c[4][3] = A.c[5][4] = 1;
    matrix res;
    quickpow(A, n - 5, res);
    ll ans = 0;
    for (int i = 1; i <= 5; i++) {
        ans = (ans + res.c[1][i] * v[5-i] % mod) % mod;
    }
    cout << ans << endl;
}

signed main()
{
    // buff;
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}