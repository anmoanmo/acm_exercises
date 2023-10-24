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
//    int flag = 0;
//    fill(isPrime, isPrime + N, true);
//    isPrime[0] = isPrime[1] = 0;
//    for (int i = 2; flag<30001; ++i) {  
//        if (isPrime[i]) {
//            primes.push_back(i);
//            flag++;
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
//    cout << primes[n - 1] << endl;
//    return 0;
//}
//
