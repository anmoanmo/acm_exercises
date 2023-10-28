//#include <iostream>
//#include <unordered_map>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t; // 读取测试用例数量
//
//    while (t--) {
//        int n;
//        cin >> n; // 每个人写的单词数量
//
//        vector<vector<string>> words(3, vector<string>(n)); // 创建存储单词的二维向量，每行代表一个人的单词
//
//        for (int i = 0; i < 3; ++i) { // 遍历三个人
//            for (int j = 0; j < n; ++j) {
//                cin >> words[i][j]; // 输入每个人写的单词
//            }
//        }
//
//        unordered_map<string, int> wordCount; // 使用哈希表统计每个单词出现的次数
//
//        for (int i = 0; i < 3; ++i) {
//            for (int j = 0; j < n; ++j) {
//                wordCount[words[i][j]]++; // 更新单词出现次数
//            }
//        }
//
//        vector<int> points(3, 0); // 存储每个人的得分，初始为0分
//
//        for (int i = 0; i < 3; ++i) { // 遍历三个人
//            for (int j = 0; j < n; ++j) {
//                if (wordCount[words[i][j]] == 1) {
//                    points[i] += 3; // 单词仅被一个人写，得3分
//                }
//                else if (wordCount[words[i][j]] == 2) {
//                    points[i]++; // 单词被两人写，得1分
//                }
//            }
//        }
//
//        cout << points[0] << " " << points[1] << " " << points[2] << endl; // 输出每个人的得分
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
//	int n = 0; cin >> n;//进行多少场游戏
//	while (n--) {
//		int num = 0;
//		cin >> num;//输入多少单词
//		string words[3][1000];
//		for (int i = 0; i < 3;i++) {
//			for (int j = 0; j < num; j++) {
//				cin >> words[i][j];
//			}
//		}
//	
//		unordered_map<string, int> m;//记录词组出现次数
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
