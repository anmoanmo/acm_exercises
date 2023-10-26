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
//const int N = 1e7;
//bool isPrime[N];
//vector<int> primes;
//
//void ip() {
//	fill(isPrime, isPrime + N, true);
//	isPrime[0] = isPrime[1] = 0;
//	for (int i = 2; i < N; ++i) {
//		if (isPrime[i]) {
//			primes.push_back(i);
//			for (int j = 2 * i; j < N; j += i) {
//				isPrime[j] = false;
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
//	int t = 0; cin >> t;
//	ip();
//
//	int x;
//	while (t--) {
//		cin >> x;
//		x++;
//		while(x--){
//			if (isPrime[x]) {
//				cout << x << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}
//
