//#include <iostream>
//#include <unordered_map>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t; // ��ȡ������������
//
//    while (t--) {
//        int n;
//        cin >> n; // ÿ����д�ĵ�������
//
//        vector<vector<string>> words(3, vector<string>(n)); // �����洢���ʵĶ�ά������ÿ�д���һ���˵ĵ���
//
//        for (int i = 0; i < 3; ++i) { // ����������
//            for (int j = 0; j < n; ++j) {
//                cin >> words[i][j]; // ����ÿ����д�ĵ���
//            }
//        }
//
//        unordered_map<string, int> wordCount; // ʹ�ù�ϣ��ͳ��ÿ�����ʳ��ֵĴ���
//
//        for (int i = 0; i < 3; ++i) {
//            for (int j = 0; j < n; ++j) {
//                wordCount[words[i][j]]++; // ���µ��ʳ��ִ���
//            }
//        }
//
//        vector<int> points(3, 0); // �洢ÿ���˵ĵ÷֣���ʼΪ0��
//
//        for (int i = 0; i < 3; ++i) { // ����������
//            for (int j = 0; j < n; ++j) {
//                if (wordCount[words[i][j]] == 1) {
//                    points[i] += 3; // ���ʽ���һ����д����3��
//                }
//                else if (wordCount[words[i][j]] == 2) {
//                    points[i]++; // ���ʱ�����д����1��
//                }
//            }
//        }
//
//        cout << points[0] << " " << points[1] << " " << points[2] << endl; // ���ÿ���˵ĵ÷�
//    }
//
//    return 0;
//}




//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#include<deque>
//#include <unordered_set>
//#include <unordered_map>
//#include<string>
//
//using namespace std;
//
//int main() {
//	int n = 0; cin >> n;//���ж��ٳ���Ϸ
//	while (n--) {
//		int num = 0;
//		cin >> num;//������ٵ���
//		string words[3][1000];
//		for (int i = 0; i < 3;i++) {
//			for (int j = 0; j < num; j++) {
//				cin >> words[i][j];
//			}
//		}
//	
//		unordered_map<string, int> m;//��¼������ִ���
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < num; j++) {
//				m[words[i][j]]++;
//			}
//		}
//
//		vector<int> scores(3, 0);
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < num; j++) {
//				if (m[words[i][j]] == 1) {
//					scores[i] += 3;
//				}
//				else if (m[words[i][j]] == 2) {
//					scores[i] += 1;
//				}
//				else if (m[words[i][j]] == 1) {
//					scores[i] += 0;
//				}
//			}
//		}
//		for (int i = 0; i < 3; i++) {
//			cout << scores[i] << " ";
//		}
// 
//		cout << endl;
//	}
//	return 0;
//}
