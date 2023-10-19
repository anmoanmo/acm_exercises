//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cmath>
//#include<string>
//#include<vector>
//#include<list>
//#include<queue>
//#include<deque>
//#include<stack>
//#include<map>
//#include<algorithm>
//#include<iomanip>
//
//
//#define endl '\n'
//
//using namespace std;
//
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int t, n, s;
//
//    cin >> t;
//    while (t--) {
//        cin >> n >> s;
//
//        vector<int> v(n);
//        for (int i = 0; i < n; ++i) {
//            cin >> v[i];
//        }
//
//        int l = 0, r = 0, sum = 0, ans = 1e9;
//
//        while (r < n) {
//            sum += v[r];
//            while (sum >= s) {
//                ans = min(ans, r - l + 1);  // ¸üÐÂ´ð°¸
//                sum -= v[l];
//                l++;
//            }
//            r++;
//        }
//
//        if (ans == 1e9) {
//            ans = 0;
//        }
//
//        cout << ans << endl;
//    }
//
//    return 0;
//}