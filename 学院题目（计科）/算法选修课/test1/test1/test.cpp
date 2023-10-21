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
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    string str; cin >> str;  
//    int n = str.size();
//
//    // ´ÓÓÒµ½×ó±éÀú×Ö·û´®
//    for (int i = n - 1; i >= 0; i--) {
//        if ((str[i] - '0') % 2 == 0) {
//            cout << n - i - 1 << endl;  
//            return 0;
//        }
//    }
//
//    cout << n << endl;
//    return 0;
//}

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
//#include<unordered_set>
//#include<algorithm>
//#include<iomanip>
//typedef long long ll;
//
//using namespace std;
//
//const int N = 1e5 + 10;
//int a[N], b[N];
//
//int gcd(int a, int b) {
//    while (b) {
//        int temp = a % b;
//        a = b;
//        b = temp;
//    }
//    return a;
//}
//
//int main() {
//    int n = 0; cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//        b[a[i]]++;
//    }
//    int result = 0;
//    for (int i = 0; i < n; ++i) {
//        if (b[i]) {
//            continue;
//        }
//        if (i) {
//            result = max(result, a[i - 1]);
//        }
//        if (i + 1 < n) {
//            result = max(result, a[i + 1]);
//        }
//    }
//        int flag = -1;
//        for (int i = 0; i <= n + 1; ++i) {
//            if (!b[i]) {
//                flag = i;
//                break;
//            }
//        }
//        if (flag == 1) {
//            cout << result << endl;
//            return 0;
//        }
//    cout << max(flag, result) << endl;
//    return 0;
//}

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
//const int N = 1e6 + 5;
//int a[N], b[N];
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n = 0; cin >> n;
//	ll sum = 0;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		b[a[i]]++;
//		sum += (ll)a[i];
//	}
//	if (sum == 0) {
//		cout << 0 << endl;
//		return 0;
//	}
//	int ans = 0;
//	while (b[ans]) {
//		ans++;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (a[i] == 0) {
//			ans = max(ans, a[i + 1]);
//			ans = max(ans, a[i - 1]);
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}

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
//const int N = 1e6 + 5;
//int a[N], b[N];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int  n = 0; cin >> n;
//	ll sum = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		b[a[i]]++;
//		sum += (ll)a[i];
//	}
//	if (sum == 0) {
//		cout << 0 << endl;
//		return 0;
//	}
//	int ans = 0;
//		while (b[ans]) {
//			ans++;
//	}
//		for (int i = 0; i < n; i++) {
//			if (a[i] == 0) {
//				ans = max(ans, a[i + 1]);
//				ans = max(ans, a[i - 1]);
//			}
//		}
//		cout << ans << endl;
//	return 0;
//}