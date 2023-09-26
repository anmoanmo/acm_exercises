#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool canLeave(const string& a, const string& b, vector<char>& stack, string& output) {
    int i1 = 0, i2 = 0; // O1和O2的索引
    while (i2 < a.length()) {
        // 如果栈为空或者栈顶元素不等于b的当前字符，尝试将a的字符入栈
        if (stack.empty() || stack.back() != b[i2]) {
            if (i1 >= a.length()) {
                return false; // a已经遍历完，但是无法匹配b
            }
            output += "in ";
            stack.push_back(a[i1]);
            i1++;
        }
        else {
            // 栈顶元素等于b的当前字符，尝试将其出栈
            output += "out ";
            stack.pop_back();
            i2++;
        }
    }
    return true;
}

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) {
            break;
        }
        string a, b;
        cin >> a >> b;
        vector<char> v;
        string output;

        if (canLeave(a, b, v, output)) {
            cout << "Yes." << endl;
            cout << output << endl;
        }
        else {
            cout << "No." << endl;
        }

        cout << "FINISH" << endl;
    }
    return 0;
}
