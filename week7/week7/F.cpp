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
//using namespace std;
//
//long l, rock, m;
//long rocks[1000000];
//bool check(long mid) {
//	int num = 0, sum = 0;//num记录移走的石头，sum记录当前离起点的距离
//	for (int i = 1; i <= rock + 1; i++) {
//		if (rocks[i] - sum < mid) {
//			num++;
//		}
//		else {
//			sum = rocks[i];
//		}
//	}
//	if (num > m) {
//		return false;
//	}
//	else {
//		return true;
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> l >> rock >> m;
//	rocks[0] = 0; rocks[rock + 1] = l;
//	for (int i = 1; i <= rock;i++) {
//		cin >> rocks[i];
//	}
//
//	long left = 1, right = l, mid, min = 0;
//
//	while (left<=right) {
//		mid = (left + right) / 2;
//		if (check(mid)) {
//			min = mid;
//			left = mid + 1;
//		}
//		else {
//			right = mid - 1;
//		}
//	}
//	cout << min << endl;
//	return 0;
//}