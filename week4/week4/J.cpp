//#include<iostream>
//#include<queue>
//#include <string>
//#include<algorithm>
//#include <deque>
//
//using namespace std;
//
//int main() {
//    int T;
//    cin >> T;
//
//    for (int testCase = 1; testCase <= T; ++testCase) {
//        int n, m;
//        cin >> n >> m;
//        deque<int> q;
//
//        cout << "Case " << testCase << ":" << endl;
//
//        for (int i = 0; i < m; ++i) {
//            string operation;
//            cin >> operation;
//
//            if (operation == "pushLeft") {
//                int x;
//                cin >> x;
//                if (q.size() < n) {
//                    q.push_front(x);
//                    cout << "Pushed in left: " << x << endl;
//                }
//                else {
//                    cout << "The queue is full" << endl;
//                }
//            }
//            else if (operation == "pushRight") {
//                int x;
//                cin >> x;
//                if (q.size() < n) {
//                    q.push_back(x);
//                    cout << "Pushed in right: " << x << endl;
//                }
//                else {
//                    cout << "The queue is full" << endl;
//                }
//            }
//            else if (operation == "popLeft") {
//                if (!q.empty()) {
//                    int x = q.front();
//                    q.pop_front();
//                    cout << "Popped from left: " << x << endl;
//                }
//                else {
//                    cout << "The queue is empty" << endl;
//                }
//            }
//            else if (operation == "popRight") {
//                if (!q.empty()) {
//                    int x = q.back();
//                    q.pop_back();
//                    cout << "Popped from right: " << x << endl;
//                }
//                else {
//                    cout << "The queue is empty" << endl;
//                }
//            }
//        }
//    }
//
//    return 0;
//}



//#include<iostream>
//#include<queue>
//#include <string>
//#include<algorithm>
//#include <deque>
//
//using namespace std;
//
//int main() {
//	int t = 0;
//	cin >> t;
//	for (int i = 1; i <= t; i++) {
//		int n = 0, m = 0;
//		cin >> n >> m;
//		deque<int> q;
//		cout << "Case " << i << ':' << endl;
//
//		for (int i = 0; i < m; i++) {
//			string operation;
//			cin >> operation;
//
//			if (operation == "pushLeft") {
//				int x = 0;
//				cin >> x;
//				if (q.size() < n) {
//					q.push_front(x);
//					cout << "Pushed in left: " << x << endl;
//				}
//				else {
//					cout << "The queue is full" << endl;
//				}
//			}
//			else if(operation == "pushRight") {
//				int x = 0;
//				cin >> x;
//				if (q.size() < n) {
//					q.push_back(x);
//					cout << "Pushed in right: " << x << endl;
//				}
//				else {
//					cout << "The queue is full" << endl;
//				}
//			}
//			else if (operation == "popRight") {
//		
//				if (q.size() >0 ) {
//					cout << "Popped from right: " << q.back() << endl;
//					q.pop_back();
//				}
//				else {
//					cout << "The queue is empty" << endl;
//				}
//			}
//			else if (operation == "popLeft") {
//
//				if (q.size() > 0) {
//					cout << "Popped from left: " << q.front() << endl;
//					q.pop_front();
//				}
//				else {
//					cout << "The queue is empty" << endl;
//				}
//			}
//		}
//	}
//}