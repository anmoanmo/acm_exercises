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


//gptʹ����״���飨Binary Indexed Tree��BIT���������Ż���
//��״���������O(log n)��ʱ����������Ӳ����Ͳ�ѯ����
//�⽫����������ܡ�
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// ��״����ĸ��²�����������i����ֵ����delta
//void update(vector<long long>& BIT, long long i, long long delta) {
//    while (i < BIT.size()) {
//        BIT[i] += delta;
//        i += i & -i; // ������һ����صĽڵ�
//    }
//}
//
//// ��״����Ĳ�ѯ��������ѯǰ׺��
//long long query(vector<long long>& BIT, long long i) {
//    long long sum = 0;
//    while (i > 0) {
//        sum += BIT[i];
//        i -= i & -i; // �ƶ�����һ����صĽڵ�
//    }
//    return sum;
//}
//
//int main() {
//    long n, m;
//    cin >> n >> m;
//
//    vector<long long> colors(n + 1, 0); // ʹ����״���飬������1��ʼ
//    vector<long long> BIT(n + 1, 0);
//
//    while (m--) {
//        long begin, end;
//        cin >> begin >> end;
//
//        // ������״���飬begin����1��end+1����1
//        update(BIT, begin, 1);
//        update(BIT, end + 1, -1);
//    }
//
//    // ʹ����״�������ÿ�������Ϳɫ����
//    for (long i = 1; i <= n; i++) {
//        colors[i] = query(BIT, i);
//    }
//
//    // ���ÿ������Ϳɫ�Ĵ���
//    for (long i = 1; i <= n; i++) {
//        cout << colors[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

//�������
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