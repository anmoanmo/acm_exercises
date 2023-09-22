//#include<iostream>
//#include<queue>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//	queue<int> q;
//	int n = 0;
//	cin >> n;
//	while (n--) {
//		int operation = 0;
//		cin >> operation;
//		if (operation == 1) {
//			int x = 0;
//			cin >> x;
//			q.push(x);
//		}
//		else if (operation == 2) {
//			cout << q.front() << endl;
//		}
//		else if (operation == 3) {
//			if (!q.empty()) {
//				q.pop();
//			}
//		}
//		else if (operation == 4) {
//			cout << q.size() << endl;
//		}
//	}
//}