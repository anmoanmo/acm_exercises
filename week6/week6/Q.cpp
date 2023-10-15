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
//struct cow {
//    int start;  // 开始时间
//    int end;    // 结束时间
//    int id;     // 奶牛的编号
//};
//
//struct stall {
//    int end;    // 牛棚的结束时间
//};
//
//bool compare(const cow& a, const cow& b) {
//    return a.start < b.start;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int t;
//    cin >> t;
//
//    vector<cow> cows(t);
//    for (int i = 0; i < t; i++) {
//        cin >> cows[i].start >> cows[i].end;
//        cows[i].id = i;
//    }
//
//   
//    sort(cows.begin(), cows.end(), compare);
//
//    vector<stall> stalls;//所有牛棚
//    vector<int> cow_stall(t); //牛棚里放着那只牛，用的几号牛棚
//
//    //每个牛逐个遍历有没有可以使用的牛棚
//    for (int i = 0; i < t; i++) {
//        bool have = false;//是否有分配使用
//
//        for (int j = 0; j < stalls.size(); j++) {
//            if (stalls[j].end < cows[i].start) {
//                stalls[j].end = cows[i].end;
//                cow_stall[cows[i].id] = j + 1; 
//                have = true;//有的话标记
//                break;
//            }
//        }
//
//        //没有牛棚则新建
//        if (!have) {
//            stall newStall;
//            newStall.end = cows[i].end;
//            stalls.push_back(newStall);
//            cow_stall[cows[i].id] = stalls.size(); //标记编号
//        }
//    }
//
//    cout << stalls.size() << endl;
//    for (int i = 0; i < t; i++) {
//        cout << cow_stall[i] << endl;
//    }
//
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#include<iomanip>

using namespace std;

struct cow {
    int start;  // 开始时间
    int end;    // 结束时间
    int id;     // 奶牛的编号
};

struct stall {
    int end;    // 牛棚的结束时间
    int id;     // 牛棚的编号
};

bool operator<(const stall& a, const stall& b) {
    return a.end > b.end;
}

bool compare(const cow& a, const cow& b) {
    return a.start < b.start;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    vector<cow> cows(t);
    for (int i = 0; i < t; i++) {
        cin >> cows[i].start >> cows[i].end;
        cows[i].id = i;
    }
    sort(cows.begin(), cows.end(), compare);

    priority_queue<stall> pq;
    vector<int> cow_stall(t);
    int stallcount = 0;

    for (int i = 0; i < t; i++) {
        if (!pq.empty() && pq.top().end < cows[i].start) {
            cow_stall[cows[i].id] = pq.top().id;
            stall temp = pq.top();
            pq.pop();
            temp.end = cows[i].end;
            pq.push(temp);
        }
        else {
            stallcount++;
            cow_stall[cows[i].id] = stallcount;
            pq.push(stall{ cows[i].end, stallcount });  
        }
    }

    cout << stallcount << endl;
    for (int i = 0; i < t; i++) {
        cout << cow_stall[i] << endl;
    }

    return 0;
}
