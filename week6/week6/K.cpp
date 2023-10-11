#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<stack>
#include<map>

#define endl '\n';

using namespace std;

int judge(string s) {
    if (s == "O(1)") return 0;
    int power = 0;
    for (int i = 4; i < s.size() - 1; i++) {
        power = power * 10 + (s[i] - '0');
    }
    return power;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int l, ans = 0, sum = 1, flag = 1;
        map<char, bool> mp;  // 记录是否有重复的变量名
        stack<int> stk;     // 记录复杂度
        string s;
        cin >> l >> s;
        int target = judge(s);//目标复杂度
        while (l--) {
            char c1;
            cin >> c1;
            if (c1 == 'F') {
                char c2;
                string x, y;
                cin >> c2 >> x >> y;
                if (mp[c2] == true) {
                    flag = 0;//用来记录程序是否出现错误
                }
                mp[c2] = true;//标记是否变量已出现
                if (x == "n")
                {
                    x = "101";
                }  //进行大小比较的实例化;
                if (y == "n")
                {
                    y = "102";
                }   // 因为最大输入100，所以无论是输入什么数字，一定小于y=n;
                if (y <= x )
                {  
                    stk.push(0);
                }
                else 
                {
                    stk.push(1);
                }
            }
            else if (c1 == 'E') {
                if (stk.empty()) {
                    flag = 0;
                }
                else {
                    ans += stk.top();
                    stk.pop();
                }
            }
        }
        if (!stk.empty()) 
        {
            flag = 0; 
        }

        if (!flag) {
            cout << "ERR" << endl;
        }
        else if (ans == target) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}



