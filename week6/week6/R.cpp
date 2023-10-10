//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<iomanip>
//
//#define endl '\n';
//
//using namespace std;
//
//struct sun
//{
//	int l;
//	int r;
//};
//struct protect
//{
//	int num;
//	int rank;
//};
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int c = 0, l = 0;
//	cin >> c >> l;
//	sun sun[2501] = { 0 };
//	for (int i = 0; i < c; i++) {
//		cin >> sun[i].l >> sun[i].r;
//	}
//	protect p[2501] = { 0 };
//	int count = 0;
//	for (int i = 0; i < l; i++) {
//		cin >> p[i].rank >> p[i].num;
//	}
//
//	int max, flag1, flag2;
//	for (int i = 0; i < c; i++) 
//	{
//		max = 0; 
//		flag1 = 0; 
//		flag2 = 0;//flag1记录是否有合适的防晒霜
//		//flag2记录是第几个防晒霜剩余数目最多
//		for (int j = 0; j < l; j++) {
//			if (p[j].rank >= sun[i].l && p[j].rank <= sun[i].r&&p[j].num!=0) 
//			{
//				flag1 = 1;
//				if (p[j].num > max) {
//					max = p[j].num;
//					flag2 = j;
//				}
//			}
//		}
//		if (flag1) 
//		{
//			p[flag2].num--;
//			count++;
//		}
//	}
//
//	cout << count << endl;
//	return 0;
//}
//一个贪心中的线段覆盖问题
//相较于我的方法，我没有想到线段覆盖的算法模型，
//导致在防晒霜的使用效率上出现问题

//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<iomanip>
//
//#define endl '\n';
//
//struct s{
//	int l, r;
//};
//int swap1(s x, s y) {
//	return x.r < y.r;
//}
//int swap2(s x, s y) {
//	return x.l < y.l;
//}
//using namespace std;
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	s cow[2501], protect[2501];
//
//	int c = 0, l = 0, num = 0;
//	cin >> c >> l;
//	for (int i = 0; i < c; i++) {
//		cin >> cow[i].l >> cow[i].r;
//	}
//	for (int i = 0; i < l; i++) {
//		cin >> protect[i].l >> protect[i].r;
//	}
//	sort(cow + 0, cow + c, swap1);
//	sort(protect + 0, protect + l, swap2);
//	for (int i = 0; i < c; i++) {
//		for (int j = 0; j < l; j++) {
//			if (protect[j].l >= cow[i].l && protect[j].l <= cow[i].r && protect[j].r != 0) {
//				protect[j].r--;
//				num++;
//				break;
//			}
//		}
//	}
//	cout << num << endl;
//	return 0;
//}