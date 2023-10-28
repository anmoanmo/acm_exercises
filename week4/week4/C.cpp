//#include<iostream>
//#include<string>
//#include<stack>
//
//using namespace std;
//
//int main() {
//	int n = 0; char ch;
//	while (cin >> n) {
//		cin.ignore();
//		for (int i = 0; i < n; i++) {
//			stack<char>stack;
//			while (1)
//			{
//				ch = getchar();
//				if (ch == ' ' || ch == '\n' || ch == EOF)
//				{
//					while (!stack.empty())
//					{
//						cout << stack.top();
//						stack.pop();
//					}
//					if (ch == '\n' || ch == EOF)
//						break;
//					cout << " ";
//				}
//				else stack.push(ch);
//			}
//			cout << endl;
//		}
//	}
//}

//#include<iostream>  
//#include<string>
//using namespace std;
//void swap(string& a) {
//    for (int i = 0; i < a.length(); i++) {
//        int flag[100] = { 0 };
//        int j = 0;
//        if (a[i] == ' ') {
//            flag[j] = i; j++;
//        }
//        int flag2 = 0, flag3 = 0;
//        for (int h = 0; h < j; h++) {
//            for (flag3; flag3 < flag[h - 1]; flag3++) {
//                char temp = a[flag[h - 1]];
//                a[flag[h - 1]] = a[flag3];
//                a[flag3] = temp;
//            }
//            flag3 = flag[h] + 1;
//        }
//    }
//    for (int i = 0; i < a.length(); i++) {
//        cout << a[i];
//    }
//}
//int main() {
//    int n = 0;
//    while (cin >> n) {
//        string input;
//        getline(cin, input);
//        string temp = input;
//        swap(temp);
//        cout << endl;
//        cout << temp << endl;
//    }
//    return 0;
//}
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
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int t = 0; cin >> t;
//	cin.ignore();
//	stack<char> s; 
//	while (t--) {
//		char x;
//		while (cin.get(x)&&x!='\n') {
//			if (x == ' ') {
//				while (!s.empty()) {
//					cout << s.top();
//					s.pop();
//				}
//				cout << " ";
//			}
//			else {
//				s.push(x);
//			}
//		}
//		while (!s.empty()) {
//			cout << s.top();
//			s.pop();
//		}
//		cout << endl;
//	}
//	return 0;
//}