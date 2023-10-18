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
//double t, n, a, b, c, x1, x2, x;
//double max1;
//
//double fc(double a, double b, double c) {
//	if (a > 0) {
//		double x = -b / (2 * a);
//		if (x >= 0 && x <= 1000) {
//			return min({ c, a * x * x + b * x + c, a * 1000 * 1000 + b * 1000 + c });
//		}
//		else if(x<0){
//			return c;
//		}
//		else {
//			return a * 1000 * 1000 + b * 1000 + c;
//		}
//	}
//	else if (a < 0) {
//		double x = -b / (2 * a);
//		if (x >= 0 && x <= 1000) {
//			return min({ c, a * x * x + b * x + c, a * 1000 * 1000 + b * 1000 + c });
//		}
//		else if (x < 0) {
//			return a * 1000 * 1000 + b * 1000 + c;
//		}
//		else {
//			return c;
//		}
//	}
//	else {
//		return min(c, b * 1000 + c);
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> t;
//	while (t--) {
//		max1 = -1e9;
//		cin >> n;
//
//		while (n--) {
//			cin >> a >> b >> c;
//			max1 = max(max1, fc(a, b, c));
//		}
//		cout << fixed << setprecision(4) << max1 << endl;
//	}
//	return 0;
//}