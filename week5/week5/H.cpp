//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    long n, m;
//    cin >> n >> m;
//
//    vector<long> colors(n, 0); 
//    while (m--) {
//        long begin = 0, end = 0;
//        cin >> begin >> end;
//        for (long i = begin - 1; i < end; i++) {
//            colors[i]++;
//        }
//    }
//    for (long i = 0; i < n; i++) {
//        cout << colors[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}


//gpt使用树状数组（Binary Indexed Tree，BIT）来进行优化。
//树状数组可以在O(log n)的时间内完成增加操作和查询操作
//这将显著提高性能。
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// 树状数组的更新操作，将索引i处的值增加delta
//void update(vector<long long>& BIT, long long i, long long delta) {
//    while (i < BIT.size()) {
//        BIT[i] += delta;
//        i += i & -i; // 更新下一个相关的节点
//    }
//}
//
//// 树状数组的查询操作，查询前缀和
//long long query(vector<long long>& BIT, long long i) {
//    long long sum = 0;
//    while (i > 0) {
//        sum += BIT[i];
//        i -= i & -i; // 移动到上一个相关的节点
//    }
//    return sum;
//}
//
//int main() {
//    long n, m;
//    cin >> n >> m;
//
//    vector<long long> colors(n + 1, 0); // 使用树状数组，索引从1开始
//    vector<long long> BIT(n + 1, 0);
//
//    while (m--) {
//        long begin, end;
//        cin >> begin >> end;
//
//        // 更新树状数组，begin处加1，end+1处减1
//        update(BIT, begin, 1);
//        update(BIT, end + 1, -1);
//    }
//
//    // 使用树状数组计算每个气球的涂色次数
//    for (long i = 1; i <= n; i++) {
//        colors[i] = query(BIT, i);
//    }
//
//    // 输出每个气球被涂色的次数
//    for (long i = 1; i <= n; i++) {
//        cout << colors[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

//差分数组
#include <iostream>
#include <vector>

using namespace std;

int main() {
    long n, m;
    cin >> n >> m;

    vector<long long> colors(n, 0); 
    vector<long long> v(n + 1, 0); 

    while (m--) {
        long begin, end;
        cin >> begin >> end;

        v[begin - 1]++; 
        v[end]--; 
    }

    long long color = 0;

    for (long i = 0; i < n; i++) {
        color += v[i];
        colors[i] = color;
    }

    for (long i = 0; i < n; i++) {
        cout << colors[i] << " ";
    }
    cout << endl;

    return 0;
}