////·­Ó²±Ò
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
//	string str1;
//	string str2;
//
//	cin >> str1 >> str2;
//	int flag = 0, n = str1.size();
//	if (str1[0] != str2[0] && str1[1] == str2[1]) {
//		flag++;
//	}
//	for (int i = 1; i < n-1; i++) {
//		 if (str1[i] != str2[i]) {
//			str1[i + 1] = (str1[i + 1] == '*' ? 'o' : '*');
//			flag++;
//		}
//	}
//	 if (str1[n - 1] != str2[n - 1]&&str1[n-2]==str2[n-2]) {
//		flag++; 
//		}
//	cout << flag << endl;
//	return 0;
//}