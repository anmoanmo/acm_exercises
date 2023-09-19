//#include<iostream>
//
//using namespace std;
//
//int  find(int a) {
//	int k = a - 1;
//	if (( a & k ) == 0) {
//		cout << k << endl;
//		return k;
//	}
//	return find(a - 1);
//	
//}
//
//int main() {
//	int n = 0, num = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> num;
//		find(num);
//	}

//ΩµµÕ ±º‰∏¥‘”∂»
//#include<iostream>
//
//using namespace std;
//
//int  find(int a) {
//	int k = a - 1;
//	for (int i = 0; i < a - 1; i++) {
//		if ((a & k) == 0) {
//			cout << k << endl;
//			return k;
//		}
//		a = a & k;
//		k--;
//	}
//
//}
//
//int main() {
//	int n = 0, num = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> num;
//		find(num);
//	}
//}
#include<bits/stdc++.h>
#define debug(a,b) printf("%s = %d\n",a,b);
typedef long long ll;
using namespace std;

inline int read() {
	int s = 0, w = 1;
	char ch = getchar();
	while (ch < '0' || ch>'9') { if (ch == '-')w = -1; ch = getchar(); }
	while (ch >= '0' && ch <= '9') s = s * 10 + ch - '0', ch = getchar();//s=(s<<3)+(s<<1)+(ch^48);
	return s * w;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll ans = 1;
		int f = 0;
		ll i;
		for (i = 30; i >= 0; i--)
		{
			if (f == 0 && (n & (1 << i)))
			{
				f = 1;
				ans = (1 << i);
				continue;
			}
			if ((n & (1 << i)) == 0)
			{
				if (f == 0)continue;
				break;
			}
		}
		cout << ans - 1 << endl;
	}
	return 0;
}

