//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//struct student {
//	string name;
//	int score;
//};
//
//bool judge(student& a, student& b) {
//	if (a.score == b.score) {
//		return a.name < b.name;
//	}
//	return a.score > b.score;
//}
//
//int main() {
//	int n = 0;
//	cin >> n;
//
//	vector<student> stu;
//	for (int i = 0; i < n;i++) {
//		string name;
//		int score;
//		cin >> name >> score;
//		stu.push_back({ name,score });
//	}
//	sort(stu.begin(), stu.end(), judge);
//		for (student c : stu) {
//			cout << c.name << endl;
//		}
//		return 0;
//}