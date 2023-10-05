//#include<iostream>
//const long n = 1e5 + 8;
//long long a[n];
//
//using namespace std;
//
//int main() {
//	int n = 0; cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	int m = 0; cin >> m;
//	while (m--) {
//		long begin = 0, end = 0;
//		cin >> begin >> end;
//		int result = a[begin-1];
//		for (int i = begin; i < end; i++) {
//			result ^= a[i];
//		}
//		cout << result << '\n';
//	}
//}
// 
// Ç°×ºÒì»ò
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    int n = 0; cin >> n;
//    vector<int> v(n);
//    for (int i = 0; i < n; ++i) {
//        cin >> v[i];
//    }
//    int m = 0;
//    cin >> m;
//
//    vector<int> v1(n + 1, 0);
//    for (int i = 1; i <= n; ++i) {
//        v1[i] = v1[i - 1] ^ v[i - 1];
//    }
//
//    for (int i = 0; i < m; i++) {
//        int begin = 0, end = 0;
//        cin >> begin >> end;
//        int result = v1[end] ^ v1[begin - 1];
//        cout << result << endl;
//    }
//
//    return 0;
//}
