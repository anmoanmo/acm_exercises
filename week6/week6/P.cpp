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
//
//
//#define endl '\n';
//
//using namespace std;
//
//struct work {
//    long long spent;
//    long long awards;
//};
//
//bool compare(const work& a, const work& b) {
//    return a.spent < b.spent;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    long long t;
//    cin >> t;
//    vector<work> v(t);
//    for (int i = 0; i < t; i++) {
//        cin >> v[i].spent >> v[i].awards;
//    }
//
//    // 根据截止日期对工作进行排序
//    sort(v.begin(), v.end(), compare);
//
//    priority_queue<long long> pq;  // 用于在给定的截止时间内选择最大的奖励
//    long long sum = 0;
//    long long time = 0;
//
//    for (int i = 0; i < t; i++) {
//        if (time < v[i].spent) {
//            sum += v[i].awards;
//            pq.push(-v[i].awards);  // 存储负值，以便从队列中获得最小值
//            time++;
//        }
//        else {
//            if (!pq.empty() && -pq.top() < v[i].awards) {
//                sum += v[i].awards + pq.top();
//                pq.pop();
//                pq.push(-v[i].awards);
//            }
//        }
//    }
//
//    cout << sum << '\n';
//    return 0;
//}