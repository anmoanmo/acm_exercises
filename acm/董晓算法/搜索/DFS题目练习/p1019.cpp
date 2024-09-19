//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-4.
//


#include<iostream>

using namespace std;

const int N = 25;
int n, ans;
int used[N]; //每个单词的使用次数
string word[N];

void dfs(string s) { //对当前串s接龙
    int ls = s.size();
    ans = max(ans, ls);
    for (int i = 0; i < n; i++) { //枚举每个单词
        string w = word[i];
        int lw = w.size();
        for (int j = 1; j < ls && j < lw; j++) { //枚举位置
            if (used[i] < 2 && s.substr(ls - j) == w.substr(0, j)) {
                used[i]++; //使用次数+1
                dfs(s + w.substr(j)); //dfs新串
                used[i]--;
                break;     //已是最长接法，结束j
            }
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> word[i];
    string start;
    cin >> start;
    start = "*" + start; //在前面添加一个字符，不用特判了
    dfs(start);
    cout << ans - 1 << endl;
}