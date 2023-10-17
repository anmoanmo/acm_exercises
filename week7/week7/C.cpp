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
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int t = 0; cin >> t;
//	long  x;//用来储存输入的数字
//	while (t--) {
//		long a = 0, b = 0;//a:多少颗糖  b:询问多少次
//		cin >> a >> b;
//		vector<long> v(a);
//		for (long& val : v) {
//			cin >> val;
//		}
//		sort(v.rbegin(), v.rend());
//		
//		vector<long> v1(a);
//		v1[0] = v[0];
//		//使用前缀和记录吃多少颗糖时的最多获取糖分量
//		for (int i = 1; i < a; i++) {
//			v1[i] = v1[i - 1] + v[i];
//		}
//		while (b--) {
//			long left = 0, right = a - 1, mid;
//			cin >> x;
//
//			long ans=-1;
//			while (left <= right) {
//				mid = (left + right) / 2;
//				if (x <= v1[mid]) {
//					ans = mid + 1;
//					right = mid - 1;
//				}
//				else {
//					left = mid + 1;
//				}
//			}
//			cout << ans << endl;
//		}
//	}
//	return 0;
//}