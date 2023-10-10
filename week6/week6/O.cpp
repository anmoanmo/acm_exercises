//#include <iostream>
//#include <vector>
//#include<cmath>
//#include <algorithm>
//#define endl '\n';
//using namespace std;
//
//struct s {
//    int left;
//    int right;
//};
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//
//    long long sum = 1, max = 0;
//    s s[10000] = { 0 };
//    s[0].left = s[0].right = 1;
//    int n = 0; cin >> n;
//    sum *= s[0].left;
//    for (int i = 1; i <= n;i++) {
//        cin >> s[i].left >> s[i].right;
//        sum *= s[i].left;
//    }for (int i = 1; i <= n; i++) {
//        if (i == 1) {
//            max = sum / s[i].left * s[i].right;
//        }
//        max = min(max, sum / s[i].left * s[i].right);
//    }
//    cout << max << endl;
//	return 0;
//}
