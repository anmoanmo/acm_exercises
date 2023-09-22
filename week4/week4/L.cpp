//#include <iostream>
//#include<stack>
//#include<vector>
//#include<string>
//#include<stack>
//#include<queue>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    priority_queue<int, vector<int>, greater<int>> p; 
//
//    for (int i = 0; i < n; i++) {
//        int a;
//        cin >> a;
//        p.push(a);
//    }
//
//    long long cost = 0; // 总体力消耗
//
//    while (p.size() > 1) {
//        int heap1 = p.top();
//        p.pop();
//        int heap2 = p.top();
//        p.pop();
//
//        int newHeap = heap1 + heap2; 
//        cost += newHeap;
//        p.push(newHeap); 
//    }
//
//    cout << cost << endl;
//
//    return 0;
//}


//#include<iostream>
//#include<queue>
//#include<stack>
//
//using namespace std;
//int main() {
//	int n = 0;
//	cin >> n;//多少堆
//	priority_queue<int, vector<int>, greater<int>>q;
//	while (n--) {
//		int a = 0; cin >> a;
//		q.push(a);
//	}
//	int minCost = 0;
//
//	while (q.size() > 1) {
//		int heap1 = q.top();
//		q.pop();
//		int heap2 = q.top();
//		q.pop();
//
//		int totalHeap = heap1 + heap2;
//		minCost += totalHeap;
//		q.push(totalHeap);
//	}
//	cout << minCost << endl;
//}