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
//const int N = 1e6;
//bool isPrime[N];
//vector<int> primes;
//
//void ip() {
//    fill(isPrime, isPrime + N, true);
//    isPrime[0] = isPrime[1] = 0;
//    for (int i = 2; i < N; ++i) {
//        if (isPrime[i]) {
//            primes.push_back(i);
//            for (int j = 2 * i; j < N; j += i) {
//                isPrime[j] = false;
//            }
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    ip();
//
//    int t = 0; cin >> t;
//
//    while (t--) {
//        vector<ll> v;
//        ll x = 0; cin >> x;
//        for (int a : primes) {
//            if (1LL * a * a > x) {
//                break;
//            }
//            while (x % a == 0) {
//                v.push_back(a);
//                x /= a;
//            }
//        }
//        if (x > 1) {
//            v.push_back(x);
//        }
//        for (ll i : v) {
//            cout << i << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cmath>
//#include<vector>
//
//typedef long long ll;
//
//using namespace std;
//
//const int N = 1e6;
//bool isPrime[N];
//vector<int> primes;
//
//void ip() {
//    fill(isPrime, isPrime + N, true);
//    isPrime[0] = isPrime[1] = 0;
//    for (int i = 2; i < N; ++i) {
//        if (isPrime[i]) {
//            primes.push_back(i);
//            for (int j = 2 * i; j < N; j += i) {
//                isPrime[j] = false;
//            }
//        }
//    }
//}
//
//vector<ll> fc(ll x) {
//    vector<ll> factors;
//    for (int a : primes) {
//        if (1LL * a * a > x) {
//            break;
//        }
//        while (x % a == 0) {
//            factors.push_back(a);
//            x /= a;
//        }
//    }
//    if (x > 1) factors.push_back(x);
//    return factors;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    ip();
//
//    int t = 0; cin >> t;
//    while (t--) {
//        ll x = 0; cin >> x;
//        vector<ll> v = fc(x);
//        for (ll factor : v) {
//            cout << factor << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}




