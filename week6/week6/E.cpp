//#include <iostream>
//#define endl '\n';
//
//using namespace std;
//
//void div7(int x) {
//	if (x % 7 == 0) {
//		cout << x << endl;
//	}
//	else {
//		if (x / 10 == 0) {
//			cout << 7 << endl;
//		}
//		else {
//			for (int i = 0; i <= 9; i++) {
//				if ((x / 10 * 10 + i) % 7 == 0) {
//					cout << (x / 10 * 10 + i) << endl;
//					break;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	
//	int n = 0; cin >> n;
//	while (n--) {
//		int x = 0; cin >> x;
//		div7(x);
//	}
//}