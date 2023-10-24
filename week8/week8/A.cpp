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
//const int N = 100005;
//bool isPrime[N];
//vector<int> primes;
//
//void ip() {
//    fill(isPrime, isPrime + N, true);
//    isPrime[0] = isPrime[1] = 0;
//    for (int i = 2; i * i < N; ++i) {  
//        if (isPrime[i]) {
//            primes.push_back(i);
//            for (int j = 2 * i; j < N; j += i) { 
//                isPrime[j] = false;
//            }
//        }
//    }
//}
//
//
//int main() {
//    int n;
//    cin >> n;
//    ip();  
//    
//    vector<int> v(n);
//    for (int& a : v) {
//        cin >> a;
//    }
//    for (int i = 0; i < n; i++) {
//        if (isPrime[v[i]]) {
//            cout << v[i] << " ";
//        }
//    }
//    cout << endl;
//    return 0;
//}