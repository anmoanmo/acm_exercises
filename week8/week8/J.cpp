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
//const int N = 1e8;
//bool isPrime[N];
//vector<int> primes;
//
//void ip(int n) {
//    fill(isPrime, isPrime + n, true);
//    isPrime[0] = isPrime[1] = false;
//    for (int i = 2; i <= n; ++i) {
//        if (isPrime[i]) {
//            primes.push_back(i);
//        }
//        for (int j = 0; j < primes.size() && i * primes[j] <= n; ++j) {
//            isPrime[i * primes[j]] = false;
//            if (i % primes[j] == 0) break; 
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    int n, q;
//    cin >> n >> q;
//    ip(n);
//
//    int x = 0;
//    while (q--) {
//        cin >> x;
//        cout << primes[x - 1] << '\n';
//    }
//
//    return 0;
//}