//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//bool canLeave(const string& a, const string& b, vector<char>& stack, string& output) {
//    int i1 = 0, i2 = 0; // O1��O2������
//    while (i2 < a.length()) {
//        // ���ջΪ�ջ���ջ��Ԫ�ز�����b�ĵ�ǰ�ַ������Խ�a���ַ���ջ
//        if (stack.empty() || stack.back() != b[i2]) {
//            if (i1 >= a.length()) {
//                return false; //��ֹԽ��
//            }
//            output += "in ";
//            stack.push_back(a[i1]);
//            i1++;
//        }
//        else {
//            output += "out ";
//            stack.pop_back();
//            i2++;
//        }
//    }
//    return true;
//}
//
//int main() {
//    int n;
//    while (cin >> n) {
//        if (n == 0) {
//            break;
//        }
//        string a, b;
//        cin >> a >> b;
//        vector<char> v;
//        string output;
//
//        if (canLeave(a, b, v, output)) {
//            cout << "Yes." << endl;
//            cout << output << endl;
//        }
//        else {
//            cout << "No." << endl;
//        }
//
//        cout << "FINISH" << endl;
//    }
//    return 0;
//}

// 
//#include <iostream>
//#include <list>
//#include <string>
//
//using namespace std;
//
//bool judge( list<int>& a,  list<int>& b) {
//    list<int> station; // ����ģ���г�վ̨��ջ
//
//    for (const int& train : a) {
//        station.push_back(train); // �г���վ
//        cout << "in" << endl;
//
//        while (!station.empty() && station.back() == b.front()) {
//            station.pop_back(); // �г���վ
//            b.pop_front(); // ���³�վ˳��
//            cout << "out" << endl;
//        }
//    }
//
//    return station.empty(); // ��������г�����վ������true
//}
//
//int main() {
//    int n = 0;
//    while (cin >> n) {
//        if (n == 0) break;
//
//        list<int> a, b;
//        for (int i = 0; i < n; i++) {
//            int x = 0; cin >> x;
//            a.push_back(x);
//        }
//        for (int i = 0; i < n; i++) {
//            int x = 0; cin >> x;
//            b.push_back(x);
//        }
//
//        if (judge(a, b)) {
//            cout << "Yes." << endl;
//        }
//        else {
//            cout << "No." << endl;
//        }
//
//        cout << "FINISH" << endl;
//    }
//    return 0;
//}


#include<iostream>
#include<stack>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool judge(string& a, string& b, string& out) {
	int index1 = 0, index2 = 0;
	stack<int> s;
	while (index2 < a.length()) {
		if (s.empty() || s.top() != b[index2]) {
			if (index1 >= a.length()) {
				return false;
			}
			else {
				s.push(a[index1]);
				index1++;
				out += "in\n";
			}
		}
		else {
			s.pop();
			index2++;
			if (index2 < b.length()) {
				out += "out\n";
			}
			else {
				out += "out";
			}
		}

	}
	return true;
}

int main() {
	while (1) {
		int n = 0;
		cin >> n;
		while (n--) {
			string a, b;
			cin >> a >> b;
			string out;

			if (judge(a, b, out)) {
				cout << "Yes." << endl;
				cout << out << endl;
				cout << "FINISH" << endl;
			}
			else {
				cout << "No." << endl;
				cout << "FINISH" << endl;
			}
		}
	}
}