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
//const int N = 1e5;
//int t, n, m, a[N+5];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> t;
//	while (t--) {
//		cin >> n >> m;
//		for (int i = 1; i <= n; i++) {
//			cin >> a[i];
//		}
//		sort(a, a + n);
//		int ans = 0, max = 0;
//		for(int i=1;i<)
//
//	}
//	return 0;
//}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int check(int x, const vector<int>& sticks) {
    int cuts = 0;
    for (int len : sticks) {
        cuts += (len + x - 1) / x - 1;  
    }
    return cuts;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        int ans;

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        int left = 1, right = *max_element(v.begin(), v.end());
        while (left < right) {
            int mid = (left + right) / 2;
            if (check(mid, v) <= m) {
                right = mid;
            }
            else {
                left = mid + 1;
            }
        }
        ans = left;
        cout << ans << endl;
    }

    return 0;
}
