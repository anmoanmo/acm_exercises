//#include<iostream>
//#include<string>
//#include<unordered_set>
////std::unordered_set 是一种哈希集合，
////它的查找操作非常高效，时间复杂度接近O(1)。
////在实际应用中，如果你需要频繁执行集合操作，
////如查找交集、并集或差集等，使用哈希集合或标准库容器
//// 如 std::unordered_set 或 std::vector）通常是更好的选择，
////因为它们提供了更高效的数据结构和相关操作。
//using namespace std;
//
////求交集的函数
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