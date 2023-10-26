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
//const int N = 1e8+10;
//bool isPrime[N];
//vector<int> primes;
//
//void ip() {
//    fill(isPrime, isPrime + N, true);
//    isPrime[0] = isPrime[1] = 0;
//    for (int i = 2; i < N; ++i) {
//        if (isPrime[i]) {
//            primes.push_back(i);
//            for (int j = 0; j < primes.size() && i * primes[j] <= N; ++j) {
//                isPrime[j] = false;
//            }
//        }
//    }
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//    int t; cin >> t;
//    int x;
//    ip();
//
//    int ans=1;
//    int flag = 0;
//    while (t--) {
//        ans = 0;
//        flag = 0;
//        cin >> x;
//        while (x != 1) {
//            if (flag >= primes.size()) break; 
//
//            if (x % primes[flag] == 0) {
//                ans ^= primes[flag];
//                x /= primes[flag];
//            }
//            else {
//                flag++;
//            }
//        }
//        cout << ans << endl;
//    }
//	return 0;
//}

//#include <bitset>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//const int maxn = 100000008;
//
//std::vector<int> prm, pre;  // pre is the min-factor array.
//bool np[maxn];
//
//void getPrime(const int N = 100000000) {
//    pre.resize(N + 1);
//    for (int i = 2; i <= N; ++i) {
//        if (!np[i]) {
//            prm.push_back(i); pre[i] = i;
//        }
//        for (auto p : prm) if (i * p <= N) {
//            int k = i * p;
//            np[k] = true;
//            pre[k] = p;
//            if (i % p == 0) break;
//        }
//        else break;
//    }
//}
//
//int main() {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//    getPrime();
//    int T, n;
//    for (std::cin >> T; T; --T) {
//        std::cin >> n;
//        int ans = 0;
//        while (n != 1) {
//            ans ^= pre[n];
//            n /= pre[n];
//        }
//        std::cout << ans << '\n';
//    }
//}



#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<list>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<algorithm>
#include<iomanip>
typedef long long ll;

#define endl '\n'

using namespace std;
const int N = 1e8 + 10;
std::vector<int> primes, p1;  
bool isprime[N];

void ip() {
    p1.resize(N + 1);
    for (int i = 2; i < N; ++i) {
        if (!isprime[i]) {
            primes.push_back(i); p1[i] = i;
        }
        for (auto p : primes) if (i * p < N) {
            int k = i * p;
            isprime[k] = true;
            p1[k] = p;
            if (i % p == 0) break;
        }
        else break;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ip();

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int ans = 0;
        while (n != 1) {
            ans ^= p1[n];
            n /= p1[n];
        }
        cout << ans << '\n';
    }
    return 0;
}