//�����Ĵ�����һ�������ͷ�����һ�����ַ��������硰level��
// ���ߡ�noon���ȵȾ��ǻ��Ĵ�����дһ�������ж϶�����ַ����Ƿ��ǡ����ġ���
//��������������ʵ�����������ݵĵ�һ����һ��������n,��ʾ����ʵ���ĸ�����
// �����������n���ַ�����
//���һ���ַ����ǻ��Ĵ��������"yes",�������"no".
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
//�������ݰ����������ʵ����ÿ������ʵ���ĵ�һ��ֻ��һ������n(n<=100)��
// ��ʾ��ϲ�����Ľ�Ŀ��������Ȼ����n�����ݣ�
// ÿ�а�����������Ti_s,Ti_e (1<=i<=n)���ֱ��ʾ��i����Ŀ�Ŀ�ʼ�ͽ���ʱ�䣬
//Ϊ�˼����⣬ÿ��ʱ�䶼��һ����������ʾ��n=0��ʾ�����������������
//����ÿ������ʵ������������������ĵ��ӽ�Ŀ�ĸ�����
// ÿ������ʵ�������ռһ�С�
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
//    int start;//��Ŀ��ʼʱ��
//    int end;//��Ŀ����ʱ��
//}nums[105];
//
//bool cmp(mv u, mv v)
//{
//    return u.end < v.end;//���ս�Ŀ����ʱ����絽������
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
//        for (int j = 1; j < n; j++)//tmpָ���������
//        {
//            if (nums[tmp].end <= nums[j].start)//��ǰ��Ŀ�Ľ���ʱ��С�ڵ�����һ����Ŀ�Ŀ�ʼʱ��
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
//�������
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
// �����Ŀ��A��B���Ǽ򵥵���������������ʱ�䣬A��B ������3��������ɣ�
// �ֱ��ʾʱ���룬���磬����AΪ34 45 56��
// �ͱ�ʾA����ʾ��ʱ����34Сʱ 45���� 56�롣
// ���������ж�����ɣ�������һ������N����ʾ����ʵ���ĸ�����Ȼ����N�����ݣ�
// ÿ����6������AH,AM,AS,BH,BM,BS���ֱ��ʾʱ��A��B����Ӧ��ʱ���롣
// ��Ŀ��֤���е����ݺϷ���
// ����ÿ������ʵ�������A+B��ÿ��������Ҳ����ʱ����3������ɣ�
// ͬʱҲҪ����ʱ��Ĺ��򣨼����ֺ����ȡֵ��Χ��0~59����
// ÿ�����ռһ�У��������еĲ��ֶ�������32λ������ʾ��
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
//����һ��ʮ������N������ת����R�����������
//�������ݰ����������ʵ����ÿ������ʵ��������������N(32λ����)��R��2<=R<=16, R<>10����
//Ϊÿ������ʵ�����ת���������ÿ�����ռһ�С����R����10�����Ӧ�����ֹ���ο�16���ƣ����磬10��A��ʾ���ȵȣ���
//
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// ��ʮ������ת��Ϊָ�����Ƶ��ַ���
//string Convert(int N, int R) {
//    const string digits = "0123456789ABCDEF"; // ʮ�����ƶ�Ӧ���ַ�
//    string result = "";
//
//    while (N > 0) {
//        int remainder = N % R;
//        result += digits[remainder]; // ʹ�ö�Ӧ���Ƶ��ַ�
//        N /= R;
//    }
//
//    reverse(result.begin(), result.end()); // ��ת�ַ����ý��
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
