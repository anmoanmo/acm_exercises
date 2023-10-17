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
//#define endl '\n'
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	vector<long> v;
//	long n = 0, m = 0;
//	cin >> n >> m;
//
//	long x = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> x;
//		v.push_back(x);
//	}
//
//	while (m--) {
//		cin >> x;
//		long left = 0, right = n - 1;
//		long mid;
//		bool found = false;
//		long num = -1;
//
//		while (left <= right) {
//			mid = (left + right) / 2;
//			if (x > v[mid]) {
//				left = mid + 1;
//			}
//			else if (x < v[mid]) {
//				right = mid - 1;
//			}
//			else {
//				num = mid;
//				found = true;
//				break;
//			}
//		}
//
//		if (found) {
//			while (num > 0 && v[num - 1] == x) {
//				num--;
//			}
//			cout << num + 1 << " ";  
//		}
//		else {
//			cout << -1 << " ";
//		}
//	}
//	cout << endl;
//	return 0;
//}

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
//#define endl '\n'
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	vector<long> v;
//	long n = 0, m = 0;
//	cin >> n >> m;
//
//	long x = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> x;
//		v.push_back(x);
//	}
//
//	while (m--) {
//		cin >> x;
//		long left = 0, right = n - 1;
//		long mid;
//		bool found = false;
//		long num = -1;
//
//		while (left <= right) {
//			mid = (left + right) / 2;
//			if (x > v[mid]) {
//				left = mid + 1;
//			}
//			else if (x < v[mid]) {
//				right = mid - 1;
//			}
//			else {
//				// 当找到目标值时，不立即终止搜索，而是继续搜索左侧
//				found = true;
//				num = mid;
//				right = mid - 1;
//			}
//		}
//
//		if (found) {
//			cout << num + 1 << " ";
//		}
//		else {
//			cout << -1 << " ";
//		}
//	}
//	cout << endl;
//	return 0;
//}
