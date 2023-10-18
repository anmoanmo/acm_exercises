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
//double a, b, c, d;//系数
//using namespace std;
//
//double fc(double x) {
//	return a * x * x * x + b * x * x + c * x + d;
//}
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	double l, r, m, x1, x2;//查找标，夹逼未知数
//	cin >> a >> b >> c >> d;
//
//	int flag = 0;
//	for (double i = -100; i <= 100; i++) {
//		l = i; r = i + 1;
//		x1 = fc(i);
//		x2 = fc(i + 1.0);
//		if (x1 == 0) {
//			cout << fixed << setprecision(2) << i << " ";
//			flag++;
//		}
//		if (x1 * x2 < 0) {
//			while (r - l >= 0.00001) {
//				m = (l + r) / 2.0;
//				if (fc(m) * fc(l) <= 0) {
//					r = m;
//				}
//				else {
//					l = m;
//				}
//			}
//		 cout << fixed << setprecision(2) << (l+r)/2.0 << " ";
//		 flag++;
//		}
//		if (flag == 3) {
//			break;
//		}
//	}
//	cout << endl;
//
//	return 0;
//}