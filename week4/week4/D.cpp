//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//
//    vector<int> arr;
//
//    while (n--) {
//        int operation;
//        cin >> operation;
//
//        if (operation == 1) {
//            int x;
//            cin >> x;
//            arr.push_back(x);
//        }
//        else if (operation == 2) {
//            sort(arr.begin(), arr.end());
//        }
//        else if (operation == 3) {
//            reverse(arr.begin(), arr.end());
//        }
//        else if (operation == 4) {
//            cout << arr.size() << endl;
//        }
//        else if (operation == 5) {
//            for (int i = 0; i < arr.size(); i++) {
//                cout << arr[i] << " ";
//            }
//            cout << endl;
//        }
//        else if (operation == 6) {
//            arr.clear();
//        }
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	vector<int> a;
//	int n = 0; 
//	cin >> n;
//	while (n--) {
//		int operation = 0;
//		cin >> operation;
//		if (operation == 1) {
//			int x = 0;
//			cin >> x;
//			a.push_back(x);
//		}
//		else if (operation == 2) {
//			sort(a.begin(), a.end());
//		}
//		else if (operation == 3) {
//			reverse(a.begin(), a.end());
//		}
//		else if (operation == 4) {
//			cout << a.size() << endl;
//		}
//		else if (operation == 5) {
//			for (int i = 0; i < a.size(); i++) {
//				cout << a[i] << " ";
//			}
//			cout << endl;
//		}
//		else if (operation == 6) {
//			a.clear();
//		}
//	}
//	return 0;
//}