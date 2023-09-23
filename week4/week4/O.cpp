#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<string>
#include<deque>

using namespace std;

struct Person {
    int arrivalTime;
    int costTime;
    int queueNumber;
};

bool operator<(const Person& p1, const Person& p2) {
    return p1.arrivalTime > p2.arrivalTime;
}

int main() {
    int t;
    cin >> t;//队列
    
    while (t--) {
        int n, m;//达到时间以及购物时长
        cin >> n >> m;
        
        vector<queue<Person>> queues(m);//定义一个二维向量
        priority_queue<Person> arrival_times;//定义到达人员的队列
        
        for (int i = 0; i < n; i++) {
            int arrival, cost;
            cin >> arrival >> cost;//输入到达时间与购物时长
            arrival_times.push({arrival, cost, i});
        }
        
        vector<int> end_times(n);//结束时间的队列
        
        while (!arrival_times.empty()) {
            Person p = arrival_times.top();
            arrival_times.pop();
            
            int chosen_queue = -1;
            int min_size = n;
            
            for (int i = 0; i < m; i++) {
                if (!queues[i].empty() && queues[i].front().arrivalTime <= p.arrivalTime) {
                    queues[i].pop();
                }
                
                if (queues[i].size() < min_size) {
                    min_size = queues[i].size();
                    chosen_queue = i;
                }
            }
            
            if (chosen_queue != -1) {
                end_times[p.queueNumber] = max(p.arrivalTime, queues[chosen_queue].empty() ? 0 : queues[chosen_queue].back().arrivalTime) + p.costTime;
                queues[chosen_queue].push({end_times[p.queueNumber], p.costTime, p.queueNumber});
            }
        }
        
        int latest = *max_element(end_times.begin(), end_times.end());
        cout << latest << endl;
    }
   
    return 0;
}
