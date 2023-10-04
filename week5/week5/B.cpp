//#include<iostream>
//const int N = 5e4 + 8;
//const long long n = 1e9;
//long long arr[N];
//long long sum;
//
//using namespace std;
//
//int main() {
//	int n = 0; cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	int q = 0; cin >> q;
//	while (q--) {
//		int begin = 0, end = 0;
//		cin >> begin >> end;
//		sum = 0;
//		for (int i = begin - 1; i < begin+end-1; i++) {
//			sum += arr[i];
//		}
//		cout << sum << endl;
//	}
//}