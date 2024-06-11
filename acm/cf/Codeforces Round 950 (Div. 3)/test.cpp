#include <bits/stdc++.h>
using namespace std;

void sol() {
    long long n, m, k;
    cin >> n >> m >> k;
    vector<array<long long, 3>> fields(k);
    for (long long i = 0; i < k; i++) {
        long long row, col;
        cin >> row >> col;
        fields[i] = {col, row, i};
    }

    long long alice = n * m;

    sort(fields.begin(), fields.end());
    long long x = 0, y = 0;
    vector<long long> v(k, 0);


    for (auto& i : fields) {
        if (i[1] > x && i[0] >= y) {
            alice -= (m - i[0] + 1) * (i[1] - x);
            x = i[1], y = i[0];
            v[i[2]] = 1;
        }
    }

    vector<long long> ans(k, 0);
    cout << alice << endl;

    unordered_map<long long, long long> lastInColumn;
    for (long long i = 0; i < k; i++) {
        auto [c, r, f] = fields[i];
        lastInColumn[c] = i;
    }

    for (long long i = 0; i < k; i++) {
        auto [c, r, f] = fields[i];
        if (!v[f]) {
            continue;
        }
        if (i == lastInColumn[c]) {
            ans[f] = 1;
        }
    }

    for (long long i = 0; i < k; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        sol();
    }

    return 0;
}
