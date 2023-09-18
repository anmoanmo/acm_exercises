//“回文串”是一个正读和反读都一样的字符串，比如“level”
// 或者“noon”等等就是回文串。请写一个程序判断读入的字符串是否是“回文”。
//输入包含多个测试实例，输入数据的第一行是一个正整数n,表示测试实例的个数，
// 后面紧跟着是n个字符串。
//如果一个字符串是回文串，则输出"yes",否则输出"no".
//#include <iostream>
//#include <string>
//using namespace std;
//bool judge(const string& str) {
//    int left = 0;
//    int right = str.length() - 1;
//    while (left < right) {
//        if (str[left] != str[right]) {
//            return false;
//        }
//        left++;
//        right--;
//    }
//    return true;
//}
//int main() {
//    int n;
//    cin >> n;
//    cin.ignore();
//    for (int i = 0; i < n; i++) {
//        string input;
//        getline(cin, input);
//        if (judge(input)) {
//            cout << "yes" << endl;
//        }
//        else {
//            cout << "no" << endl;
//        }
//    }
//    return 0;
//}
//输入数据包含多个测试实例，每个测试实例的第一行只有一个整数n(n<=100)，
// 表示你喜欢看的节目的总数，然后是n行数据，
// 每行包括两个数据Ti_s,Ti_e (1<=i<=n)，分别表示第i个节目的开始和结束时间，
//为了简化问题，每个时间都用一个正整数表示。n=0表示输入结束，不做处理。
//对于每个测试实例，输出能完整看到的电视节目的个数，
// 每个测试实例的输出占一行。
//#include<iostream>
//using namespace std;
//
//int main() {
//	int n = 0;
//	while (cin >> n && n != 0) {
//		int Ti_s[100] = { 0 }, Ti_e[100] = { 0 }, sum = 1;
//		for (int i = 0; i < n; i++) {
//			cin >> Ti_s[i] >> Ti_e[i];
//		}
//		for (int i = 0; i < n; i++) {
//			for (int j = i + 1; j < n - j; n++) {
//				if (Ti_e[i] > Ti_e[j]) {
//					int temp = Ti_e[i];
//					Ti_e[i] = Ti_e[j];
//					Ti_e[j] = temp;
//				}
//			}
//			for (int i = 0; i < n; i++) {
//				if (i<n - 1 && Ti_e[i + 1] > Ti_e[i]) {
//					sum++;
//				}
//			}
//		}
//	}
//}
//#include <cstdio>
//#include <string>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//struct mv
//{
//    int start;//节目开始时间
//    int end;//节目结束时间
//}nums[105];
//
//bool cmp(mv u, mv v)
//{
//    return u.end < v.end;//按照节目结束时间从早到晚排序
//}
//
//int main()
//{
//    int n;
//    while (cin >> n && n)
//    {
//        for (int i = 0; i < n; i++) cin >> nums[i].start >> nums[i].end;
//        sort(nums, nums + n, cmp);
//        int ans = 1;
//        int tmp = 0;
//        for (int j = 1; j < n; j++)//tmp指针遍历数组
//        {
//            if (nums[tmp].end <= nums[j].start)//当前节目的结束时间小于等于下一个节目的开始时间
//            {
//                tmp = j;
//                ans++;
//            }
//        }
//        cout << ans << endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct tv_show
//{
//    int s;
//    int e;
//};
//
//bool compare(tv_show a, tv_show b)
//{
//    return a.e < b.e;
//}
//
//int main()
//{
//    int n;
//    while (cin >> n && n != 0)
//    {
//        tv_show shows[100];
//        for (int i = 0; i < n; i++)
//        {
//            cin >> shows[i].s >> shows[i].e;
//        }
//
//        sort(shows, shows + n, compare);
//
//        int sum = 1;
//        int current_end_time = shows[0].e;
//
//        for (int i = 1; i < n; i++)
//        {
//            if (shows[i].s >= current_end_time)
//            {
//                sum++;
//                current_end_time = shows[i].e;
//            }
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}
//杨辉三角
//#include<iostream>
//using namespace std;
//void triangle(int a)
//{
//	int arr[30][30] = { 0 };
//	for (int i = 0; i < a; i++)
//	{
//		for (int n = 0; n <= i; n++) {
//			if (n == 0) {
//				arr[i][n] = 1;
//				continue;
//			}
//			arr[i][n] = arr[i - 1][n - 1] + arr[i - 1][n];
//		}
//	}
//	for (int i = 0; i < a; i++)
//	{
//		for (int n = 0; n <= i; n++)
//		{
//			cout << arr[i][n] << " ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	int a = 0;
//	while (cin >> a) {
//		triangle(a);
//	}
//	return 0;
//}
// 
// 这个题目的A和B不是简单的整数，而是两个时间，A和B 都是由3个整数组成，
// 分别表示时分秒，比如，假设A为34 45 56，
// 就表示A所表示的时间是34小时 45分钟 56秒。
// 输入数据有多行组成，首先是一个整数N，表示测试实例的个数，然后是N行数据，
// 每行有6个整数AH,AM,AS,BH,BM,BS，分别表示时间A和B所对应的时分秒。
// 题目保证所有的数据合法。
// 对于每个测试实例，输出A+B，每个输出结果也是由时分秒3部分组成，
// 同时也要满足时间的规则（即：分和秒的取值范围在0~59），
// 每个输出占一行，并且所有的部分都可以用32位整数表示。
// 
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	int n = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int timeA[3] = { 0 }, timeB[3] = { 0 }, timeSum[3] = { 0 };
//		for (int j = 0; j < 6; j++) {
//			if (j < 3) {
//				cin >> timeA[j];
//			}
//			if (j >= 3) {
//				cin >> timeB[j - 3];
//			}
//		}
//		for (int j = 2; j >= 0; j--) {
//			timeSum[j] += timeA[j] + timeB[j];
//			if (j > 0) {
//				timeSum[j - 1] += timeSum[j] / 60;
//				timeSum[j] %= 60;
//			}
//		}
//		for (int j = 0; j < 3; j++) {
//			cout << timeSum[j];
//			if (j < 2) {
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}
//输入一个十进制数N，将它转换成R进制数输出。
//输入数据包含多个测试实例，每个测试实例包含两个整数N(32位整数)和R（2<=R<=16, R<>10）。
//为每个测试实例输出转换后的数，每个输出占一行。如果R大于10，则对应的数字规则参考16进制（比如，10用A表示，等等）。
//
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// 将十进制数转换为指定进制的字符串
//string Convert(int N, int R) {
//    const string digits = "0123456789ABCDEF"; // 十六进制对应的字符
//    string result = "";
//
//    while (N > 0) {
//        int remainder = N % R;
//        result += digits[remainder]; // 使用对应进制的字符
//        N /= R;
//    }
//
//    reverse(result.begin(), result.end()); // 反转字符串得结果
//    return result;
//}
//
//int main() {
//    int N, R;
//    while (cin >> N >> R) {
//        if (N < 0) {
//            cout << "-";
//            N = -N;
//        }
//        if (N == 0) {
//            cout << "0" << endl;
//        }
//        else {
//            string result = Convert(N, R);
//            cout << result << endl;
//        }
//    }
//    return 0;
//}
