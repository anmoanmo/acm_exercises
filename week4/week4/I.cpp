#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool canLeave(const string& a, const string& b, vector<char>& stack, string& output) {
    int i1 = 0, i2 = 0; // O1��O2������
    while (i2 < a.length()) {
        // ���ջΪ�ջ���ջ��Ԫ�ز�����b�ĵ�ǰ�ַ������Խ�a���ַ���ջ
        if (stack.empty() || stack.back() != b[i2]) {
            if (i1 >= a.length()) {
                return false; // a�Ѿ������꣬�����޷�ƥ��b
            }
            output += "in ";
            stack.push_back(a[i1]);
            i1++;
        }
        else {
            // ջ��Ԫ�ص���b�ĵ�ǰ�ַ������Խ����ջ
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
