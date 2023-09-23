//#include <iostream>
//#include <queue>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//bool isPrime(int n) {
//    if (n <= 1) return false;
//    if (n <= 3) return true;
//    if (n % 2 == 0 || n % 3 == 0) return false;
//
//    for (int i = 5; i * i <= n; i += 6) {
//        if (n % i == 0 || n % (i + 2) == 0) return false;
//    }
//
//    return true;
//}
//
//int min(int start, int target) {
//    if (start == target) return 0;
//
//    queue<pair<int, int>> q;
//    vector<bool> visited(10000, false);
//
//    q.push({ start, 0 });
//    visited[start] = true;
//
//    while (!q.empty()) {
//        int current = q.front().first;
//        int steps = q.front().second;
//        q.pop();
//
//        for (int i = 1; i <= 1000; i *= 10) {
//            for (int j = 0; j <= 9; ++j) {
//                int digit = (current / i) % 10;
//                int next = current - digit * i + j * i;
//
//                if (!visited[next] && isPrime(next)) {
//                    if (next == target) return steps + 1;
//                    q.push({ next, steps + 1 });
//                    visited[next] = true;
//                }
//            }
//        }
//    }
//
//    return -1;  // If a solution is not found
//}
//
//int main() {
//    int t;
//    cin >> t;
//
//    for (int i = 1; i <= t; i++) {
//        int A, B;
//        cin >> A >> B;
//
//        int result = min(A, B);
//        cout << "Case #" << i << ": " << result << endl;
//    }
//
//    return 0;
//}
