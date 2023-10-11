//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<vector>
//#include<cmath>
//#include<algorithm>
//#include<iomanip>
//
//#define endl '\n';
//
//using namespace std;
//
//struct iland_on_x_axis {
//	double left, right;
//};
//
//double compare(iland_on_x_axis &a, iland_on_x_axis &b) {
//	return a.left < b.left;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	bool possible = true;
//	double line = 0;//记录线段
//	int cases = 0;//记录第几个案例
//	int n = 0, l = 0;//岛屿的数量与雷达的覆盖半径
//	int ans = 0;
//
//	while (cin >> n >> l) {
//		possible = true;
//
//		if (n == 0 && l == 0) {
//			break;
//		}
//		vector<iland_on_x_axis> v;//存放岛屿关于x轴的线段
//
//		for (int i = 0; i < n; i++) {
//			int x = 0, y = 0;
//			cin >> x >> y;
//			if (y > l) {
//				possible = false;
//			}
//			else {
//				line = sqrt(static_cast<double>(l) * l - y * y);
//
//			}
//			iland_on_x_axis i_line;
//			i_line.left = x - line;
//			i_line.right = x + line;
//			v.push_back(i_line);
//		}
//
//		sort(v.begin(), v.end(), compare);
//
//		ans = 0;
//
//		while (!v.empty()) {
//			double radar = v[0].right;
//			ans++;
//
//			while (!v.empty() && v[0].left <= radar) {
//				radar = min(radar, v[0].right);
//				v.erase(v.begin());
//			}
//		}
//
//		if (!possible) {
//			cout << "Case " << ++cases << ": -1" << endl;
//			continue;
//		}
//		else {
//			cout << "Case " << ++cases << ": " << ans << endl;
//		}
//	}
//
//	return 0;
//}
