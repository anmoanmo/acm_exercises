//
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
//const int N = 100005;
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
//	ip();
//	int n = 0;
//	cin >> n;
//	for (int i = 4; i <= n; i+=2) {
//		for (int j = 0; j < i; j++) {
//			if (isPrime[i - primes[j]]) {
//				cout << i << "=";
//				cout << primes[j] << "+" << i - primes[j] << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}