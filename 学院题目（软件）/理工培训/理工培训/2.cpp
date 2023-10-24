//
//
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
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int t = 0;
//	cin >> t;
//	double hp = 10.0, exp = 0, hunt = 0, rank = 0, need = 1, exp_get;
//	int flag = 0;
//	while (t--) {
//		cin >> hunt;
//		if (hp - hunt <= 0) {
//			cout << rank << " " << exp << endl;
//			flag = 1;
//			break;
//		}
//		hp = min(hp - hunt, 10.0);
//		cin >> exp_get;
//		exp += exp_get;
//
//		while (exp - need >= 0) {
//			exp -= need;
//			rank++;
//			need *= 2;
//		}
//	}
//	if (!flag) {
//		cout << rank << " " << exp << endl;
//	}
//	return 0;
//}