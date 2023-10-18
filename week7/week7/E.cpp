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
//int n, m, h;
//vector<int> v(1e6);//存放树的高
//
//bool enough(int x) {
//	long sum = 0;//获得的木材
//	for (int i = 0; i < n; i++) {
//		if (v[i] > x) {
//			sum += v[i] - x;
//		}
//	}
//	if (sum >= m) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> n >> m;
//	for (int i = 0; i < n;i++) {
//		cin >> v[i];
//	}
//	int l = 0, r = 1e9, mid, h = 0;
//	while (l <= r) {
//		mid = (l + r) / 2;
//		if (enough(mid)) {
//			h = mid;
//			l = mid + 1;
//		}
//		else {
//			r = mid - 1;
//		}
//	}
//	cout << h << endl;
//	return 0;
//}