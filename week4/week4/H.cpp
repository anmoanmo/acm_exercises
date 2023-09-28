#include <iostream>
#include <string>

using namespace std;

bool judge(const string& s) {
    long a = 0;
    for (long i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '[') {
            a++;
        }
        else if (s[i] == ')' || s[i] == ']') {
            if (a <= 0) {
                return false;
            }
            a--;
                if ((s[i] == ')' && s[a] != '(') || (s[i] == ']' && s[a] != '[')) {
                    return false;
                }
        }
    }
    return true;
}

int main() {
    string str;
    while (cin >> str) {
        bool result = judge(str);
        if (result) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
// 
// 
// 
// 
// 
// 
// 
//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//bool judge(const string& s) {
//    stack<char> stack;
//    for (long i = 0; i < s.length(); i++) {
//        if (s[i] == '(' || s[i] == '[') {
//            stack.push(s[i]);
//        }
//        else if (s[i] == ')' || s[i] == ']') {
//            if (stack.empty()) {
//                return false;
//            }
//
//            char a = stack.top();
//            stack.pop();
//
//            if ((s[i] == ')' && a != '(') || (s[i] == ']' && a != '[')) {
//                return false;
//            }
//        }
//    }
//
//    return stack.empty();
//}
//
//int main() {
//    string str;
//    while (cin >> str) {
//        bool result = judge(str);
//        if (result) {
//            cout << "YES" << endl;
//        }
//        else {
//            cout << "NO" << endl;
//        }
//    }
//
//    return 0;
//}

