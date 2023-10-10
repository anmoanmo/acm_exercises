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
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b;
	c = a % 10;
	d = (a - c) / 10;
	e = b % 10;
	f = (b - e) / 10;
	if (a = b)
	{
		cout << 100 << endl;
	}
	else if (c == f && d == e)
	{
		cout << 20 << endl;
	}
	else if (c == e || c == f || d == e || d == f)
	{
		cout << 2 << endl;
	}
	else
	{
		cout << "Ã»ÖÐ½±" << endl;
	}

}
