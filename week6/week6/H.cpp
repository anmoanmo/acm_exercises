//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<iomanip>
//#include<list>
//#define endl '\n';
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int t = 0; cin >> t;
//	while (t--) {
//		int x = 0; cin >> x;
//		vector<char> v1(x * 2,'(');//�ȼٶ�����λ�ö���(
//		list<int> l1;//���ڼ�¼)�����
//
//		int flag = 1;//���ڱ�ǵڼ���λ�õ�'('Ӧ��ת��Ϊ')';
//		for (int i = 0; i < x; i++) {
//			int num = 0; cin >> num;
//			l1.push_back(num+flag);
//			flag++;
//		}
//
//		vector<char>::iterator it = v1.begin();
//
//		//д���ַ�������
//		for (int i = 1; i <= x * 2 ; i++) {
//			if (i == l1.front() ) {
//				*it = ')';
//				l1.pop_front();
//			}
//			it++;
//		}
//		
//		//���з�����
//
//		list<int> l2; 
//		for (int i = 0; i < v1.size(); i++) {
//			if (v1[i] == ')') {
//				int count = 1;
//				for (int j = i - 1; j >= 0; j--) {
//					if (v1[j] == '(') {
//						v1[j] = '0'; 
//						break;  
//					}
//					if (v1[j] == ')') {
//						count++;
//					}
//				}
//				l2.push_back(count);
//			}
//		}
//
//		for (list<int>::iterator it = l2.begin(); it != l2.end(); ++it) {
//			cout << *it << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}