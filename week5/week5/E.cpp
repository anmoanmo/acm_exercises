//#include <iostream>
//using namespace std;
//
//int main() {
//
//   return 0;
//}

//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<set>
//
//using namespace std;
//int main()
//{
//	long n = 0, i = 0, h = 0, r = 0;
//	cin >> n >> i >> h >> r;
//	vector<long> cow(n+1, h);
//	set<pair<long, long>> s;
//	while (r--) {
//		long  left = 0, right = 0;
//		cin >> left >> right;
//		if (left > right) {
//			swap(left, right);
//		}
//		s.insert({ left,right });
//		if (s.count({ left,right }) == 1) {
//			for (int j = right - 1; j > left ; j--) {
//				cow[j]--;
//			}
//		}
//	}
//	for (int j = 1; j <= n;j++) {
//		cout << cow[j] << "\n";
//	}
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<set>
//
//using namespace std;
//
//int main() {
//    long n = 0, i = 0, h = 0, r = 0;
//    cin >> n >> i >> h >> r;
//    vector<long> cow(n, h);
//
//    set<pair<int, int> > s;
//
//    while (r--) {
//        long left = 0, right = 0;
//        cin >> left >> right;
//        if (left > right) {
//            swap(left, right);
//        }
//
//        if (s.count({ left, right }) == 0) {
//            for (int j = right - 2; j > left - 1; j--) {
//                cow[j]--;
//            }
//            s.insert({ left, right });
//        }
//    }
//
//    for (int j = 0; j < n; j++) {
//        cout << cow[j] << "\n";
//    }
//}


