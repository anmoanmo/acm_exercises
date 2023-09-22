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