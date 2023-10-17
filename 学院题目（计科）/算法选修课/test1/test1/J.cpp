////滑动窗口类型题目
//
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
//	int t = 0, o = 0, p = 0;
//	cin >> t;
//	while (t--) {
//		cin >> o >> p;
//		string s;
//		cin >> s;
//		int ans = 1e9;
//		int a = 0;//窗口中不同的字母数量
//		int b = 0;//出现次数大于p的字母
//
//		int l = 0, r = 0;//左右窗口指针
//		long v[26] = { 0 };
//
//        while (r < s.size()) {
//            int i = s[r] - 'a';  // 记录索引
//
//            if (v[i] == 0) {
//                a++;
//            }
//            v[i]++;
//
//            if (p != 0 && v[i] == p) {
//                b++;
//            }
//
//            if (p == 0) {
//                while (a >= o) {
//                    ans = min(ans, r - l + 1);  // 判断答案是否更新
//                    int i = s[l] - 'a';
//                    v[i]--;
//                    if (v[i] == 0) {
//                        a--;
//                    }
//                    l++;
//                }
//            }
//            else {
//                while (a >= o && b >= o) {
//                    ans = min(ans, r - l + 1);  // 判断答案是否更新
//                    int i = s[l] - 'a';
//                    if (v[i] == p) {
//                        b--;
//                    }
//                    v[i]--;
//                    if (v[i] == 0) {
//                        a--;
//                    }
//                    l++;
//                }
//            }
//            r++;
//        }
//
//
//		if (ans == 1e9) {
//			cout << -1 << endl;
//		}
//		else {
//			cout << ans << endl;
//		}
//	}
//	return 0;
//}