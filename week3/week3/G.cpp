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
//typedef long long ll;
//
//#define endl '\n'
//
//using namespace std;
//
//bool compare(const pair<int, int>& a, const pair<int, int>& b) {
//	return a.second < b.second;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//
//	int t = 0;
//	while (cin >> t && t != 0) {
//		vector<pair<int, int>> v(t);
//
//		for (auto& a : v) {
//			cin >> a.first >> a.second;
//		}
//		sort(v.begin(), v.end(), compare);
//		int sum = 1, begin = 0, end = v[0].second;
//		for (auto a : v) {
//			if (a.first >= end) {
//				end = a.second;
//				sum++;
//			}
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}