//
// Created by 27188 on 24-6-11.
//
#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<array<int, 3>> find(int a, int b, int c, int k) {
    vector<array<int, 3>> d;
    int maxd = cbrt(k);
    int x, y, z;
    for (int i = 1; i <= maxd; i++) {
        if (k % i != 0) continue;
        x = i;
        for (int j = x; j <= sqrt(k / x); j++) {
            if (k % (x * j) != 0) continue;
            y = j;
            z = k / (x * y);
            int arr[3] = {a, b, c};
            sort(arr, arr + 3);
            if (x <= arr[0] && y <= arr[1] && z <= arr[2]) {
                d.push_back({x, y, z});
            }
        }
    }
    return d;
}

void sol() {
    int x, y, z, k;
    cin >> x >> y >> z >> k;
    vector<array<int, 3>> v = find(x, y, z, k);
    int ans1 = 0, ans2=0;
    for (auto i : v) {
        int arr[3] = {x, y, z};
        sort(arr, arr + 3);
        ans1 = (arr[0] - i[0] + 1) * (arr[1] - i[1] + 1) * (arr[2] - i[2] + 1);
        if(ans1>ans2){
            ans2 = ans1;
        }
    }
    cout << ans2 << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 0;
    cin >> t;
    while (t--) {
        sol();
    }
    return 0;
}

// void solve() {
//    int x, y, z;
//    i64 k;
//    std::cin >> x >> y >> z >> k;
//
//    i64 ans = 0;
//    for (int a = 1; a <= x; a++) {
//        for (int b = 1; b <= y; b++) {
//            i64 c = k / a / b;
//            if (a * b * c != k || c > z) {
//                continue;
//            }
//            ans = std::max(ans, 1LL * (x - a + 1) * (y - b + 1) * (z - c + 1));
//        }
//    }
//    std::cout << ans << "\n";
//}