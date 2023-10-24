//#include<iostream>
//#include<cmath>
//#include<vector>
//#include<list>
//#include<queue>
//#include<deque>
//#include<stack>
//#include<map>
//#include<algorithm>
//#include<iomanip>
//
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int n = 0; cin >> n;
//    int lit[100][100] = { 0 };
//    int m = 0, k = 0;
//    cin >> m >> k;
//
//    int x = 0, y = 0;
//
//    for (int i = 0; i < m; i++) {
//        cin >> x >> y;
//        for (int j = -2; j <= 2; j++) {
//            for (int z = -2; z <= 2; z++) {
//                if ((x + j) > n || (x + j) < 1 || (y + z) < 1 || (y + z) > n) {
//                    continue;
//                }
//
//                if (z == 0 || j == 0 || (abs(j) + abs(z) == 2)) {
//                    lit[x + j - 1][y + z - 1]++;
//                }
//            }
//        }
//    }
//
//    for (int i = 0; i < k; i++) {
//        cin >> x >> y;
//        for (int j = -2; j <= 2; j++) {
//            for (int z = -2; z <= 2; z++) {
//                if ((x + j) > n || (x + j) < 1 || (y + z) < 1 || (y + z) > n) {
//                    continue;
//                }
//                lit[x + j - 1][y + z - 1]++;
//            }
//        }
//    }
//
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (!lit[i][j]) {
//                sum++;
//            }
//        }
//    }
//    cout << sum << endl;
//    return 0;
//}




//
//if ((x + k) < 0 || (x + j) < 0 || (x + k) > n || (x + j) > n || (y + k) < 0 || (y + j) < 0 || (y + j) > n || (y + k) > n) {
//	continue;