//#include<iostream>
//#include<cmath>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//
//void factor(long long x) {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	long long flag = 0;
//	vector<long long> v;
//	for (int i = 1; i <= sqrt(x); i++) {
//		if (x % i == 0) {
//			v.push_back(i);
//			if (i != sqrt(x)) {
//				v.push_back(x / i);
//			}
//		}
//	}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	long long t = 0; cin >> t;
//	while (t--) {
//		long long x = 0;
//		cin >> x;
//		factor(x);
//	}
//}