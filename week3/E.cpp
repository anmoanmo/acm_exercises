//#include<iostream>
//#include<string>
//#include<unordered_set>
////std::unordered_set ��һ�ֹ�ϣ���ϣ�
////���Ĳ��Ҳ����ǳ���Ч��ʱ�临�ӶȽӽ�O(1)��
////��ʵ��Ӧ���У��������ҪƵ��ִ�м��ϲ�����
////����ҽ������������ȣ�ʹ�ù�ϣ���ϻ��׼������
//// �� std::unordered_set �� std::vector��ͨ���Ǹ��õ�ѡ��
////��Ϊ�����ṩ�˸���Ч�����ݽṹ����ز�����
//using namespace std;
//
////�󽻼��ĺ���
//void intersection(int* a,int n,int* b,int m) {
//	unordered_set<int> set1(a, a + n);
//	unordered_set<int> set2(b, b + m);
//	int result[100] = { 0 }, flag = 0;
//	for (int i:set1) {
//		if (set2.count(i)==0) {
//			result[flag] = i;
//			flag++;
//		}
//	}
//	if (flag==0) {
//		cout << "NULL" << endl;
//	}
//	else {
//		for (int j = 0; j < flag; j++) {
//			for (int h = j + 1; h < flag; h++) {
//				if (result[j] > result[h]) {
//					int temp = result[j];
//					result[j] = result[h];
//					result[h] = temp;
//				}
//			}
//		}
//	}
//	for (int j = 0; j < flag; j++) {
//		cout << result[j] << " ";
//	}
//	cout<<endl;
//}
//
//int main()
//{
//	int n = 0, m = 0;
//	while (cin >> n >> m) {
//		if (n == 0 && m == 0) {
//			break;
//		}
//		int assemble1[100] = { 0 }, assemble2[100] = { 0 };
//		for (int i = 0; i < n ; i++) {
//			cin >> assemble1[i];
//		}
//		for (int i = 0; i < m; i++) {
//			cin >> assemble2[i];
//		}
//		intersection(assemble1, n, assemble2, m);
//	}
//	return 0;
//}