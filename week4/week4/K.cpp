//#include<iostream>
//#include<map>
//#include<string>
//
//using namespace std;
//
//int main() {
//	int n = 0;
//	while (cin >> n && n != 0) {
//		map<string, int> color;
//		string most;//最多的气球
//		int max = 0;
//
//		for (int i = 0; i < n; i++) {
//			string color1;
//			cin >> color1;
//
//			color[color1]++;
//
//			if (color[color1] > max) {
//				most = color1;
//				max = color[color1];
//			}
//		}
//		cout << most << endl;
//	}
//}

//#include<iostream>
//#include<map>
//#include<string>
//
//using namespace std;
//
//int main() {
//	int n = 0;
//	while (cin >> n && n != 0) {
//		map<string, int> color;
//		string most;
//		int max = 0;
//		
//		for (int i = 0; i < n; i++) {
//			string str;
//			cin >> str;
//			color[str]++;
//			if (color[str] > max) {
//				max = color[str];
//				most = str;
//			}
//		}
//		cout << most << endl;
//	}
//}