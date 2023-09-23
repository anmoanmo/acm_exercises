//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	int t = 0;
//	cin >> t;
//	while (t--) {
//		int a = 0, b = 0;
//		cin >> a >> b;
//		int count = 0;
//		for (int i = a; i <= b; i++) {
//			int flag = i;
//			if (flag == i*i) {
//				cout << i ;
//				count++;
//			}
//			int flag2 = 10;
//			while (i / flag2 > 0) {
//				int x = i % flag2;
//				if (x * x == flag&&count!=0) {
//					cout <<" "<< i;
//					break;
//				}
//			 if (x * x == flag && count == 0) {
//					cout << i;
//					count++;
//					break;
//				}
//				flag2 *= 10;
//				
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}
