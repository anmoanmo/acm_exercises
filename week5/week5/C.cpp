////≥¨ ±¡À
//#include<iostream>
//
//using namespace std;
//
//bool judge(int x) {
//    while (x > 0) {
//        if (x % 10 == 7) {
//            return true;
//        }
//        x /= 10;
//    }
//    return false;
//}
//
//int main() {
//    int t = 0; cin >> t;
//    while (t--) {
//        int x = 0; cin >> x;
//        long long sum = 0;
//        for (int i = 1; i <= x; i++) {
//            if (!judge(i) && i % 7 != 0) {
//                sum += (long long)i * i;
//            }
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main() {
//    int t = 0;
//    cin >> t;
//    while (t--) {
//        long long x = 0;
//        cin >> x;
//        long long sum = 0;
//        for (int i = 1; i <= x; i++) {
//            if (i % 7 != 0 && i % 10 != 7 && i / 10 != 7) {
//                sum += (long long)i * i;
//            }
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}
////
//#include<iostream>
//using namespace std;
//int main()
//{
//    int t = 0; cin >> t;
//    while (t--) {
//        long long n;
//        cin >> n;
//        long long sum = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            if (i % 7 != 0 && i / 10 % 10 != 7 && i % 10 != 7)
//            {
//                sum +=(long long) (i * i);
//            }
//        }
//        cout << sum << endl;
//    }
//    return 0;
//
//}
//#include <iostream>
//using namespace std;
//
//bool judge(int x) {
//    while (x > 0) {
//        if (x % 10 == 7) {
//            return true;
//        }
//        x /= 10;
//    }
//    return false;
//}
//
//long long trueSum(int n) {
//    long long sum = (long long)n * (n + 1) * (2 * n + 1);
//    sum /= 6;
//
//    int i = 1;
//    for (int i = 1; i <= n; i++) {
//        if (i % 7 == 0 || judge(i)) {
//            sum -= (long long)i * i;
//        }
//    }
//
//    return sum;
//}
//
//
//
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        cout << (long long)trueSum(n) << endl;
//    }
//    return 0;
//}
// 
// gpt
//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool hasDigitSeven(int x) {
//    while (x > 0) {
//        if (x % 10 == 7) {
//            return true;
//        }
//        x /= 10;
//    }
//    return false;
//}
//
//long long calculateSquareSum(int n) {
//    vector<long long> dp(n + 1, 0);
//
//    for (int i = 1; i <= n; ++i) {
//        if (i % 7 != 0 && !hasDigitSeven(i)) {
//            dp[i] = static_cast<long long>(i) * i;
//        }
//
//        dp[i] += dp[i - 1];
//    }
//
//    return dp[n];
//}
//
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        cout << calculateSquareSum(n) << endl;
//    }
//    return 0;
//}
