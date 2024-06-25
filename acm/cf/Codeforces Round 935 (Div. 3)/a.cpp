//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-18.
//


#include<bits/stdc++.h>

#define ll long long

//void sol() {
//    using namespace std;
//    ll a, b, c;
//    cin >> a >> b >> c;
//    ll ans = a;
//    if (b % 3 != 0 && ((b + c) < (b / 3 + 1) * 3)) {
//        cout << -1 << "\n";
//        return;
//    } else {
//        if (b % 3 == 0) {
//            if (c % 3 != 0) {
//                ans += b / 3 + c / 3 + 1;
//            } else {
//                ans += b / 3 + c / 3;
//            }
//        } else {
//            if ((c - (3 - b % 3)) % 3 != 0) {
//                ans += b / 3 + 1 + (c - (3 - b % 3)) / 3 + 1;
//            } else {
//                ans += b / 3 + 1 + (c - (3 - b % 3)) / 3;
//            }
//        }
//    }
//    cout << ans << "\n";
//}

void sol(){
    using namespace std;
    ll a,b,c;
    cin >> a >> b >> c;
    cout << (c < (3 - b % 3) % 3 ? -1 : a + (b + c + 2) / 3) << "\n";
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 0;
    std::cin >> t;
    while (t--) {
        sol();
    }
}