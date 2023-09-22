//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//bool judge(long long sum) {
//    long long a[10001]; 
//    for (int i = 1; i <= 10000; i++) {
//        a[i] = i * i * i;
//    }
//    for (int i = 1; i <= 10000; i++) { 
//        long long t = sum - a[i]; 
//        int begin = 1, end = 10000;
//        while (begin <= end) { 
//            int mid = (begin + end) / 2;
//            if (t > a[mid]) {
//                begin = mid +1;
//            }
//            else if (t < a[mid]) {
//                end = mid - 1;
//            }
//            else {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    while (n--) {
//        long long sum;
//        cin >> sum;
//        if (judge(sum)) {
//            cout << "YES" << endl;
//        }
//        else {
//            cout << "NO" << endl;
//        }
//    }
//    return 0;
//}


//#include<iostream>
//#include<cmath>
//
//using namespace std;
//const int maxn = 5000 + 3;
//#define ll long long
////
//int n, m, k, t;
////
//ll mm[10001];
//
//int main() {
//    cin >> t;
//    for (ll i = 1; i < 10001; i++) {//���ִ��
//        mm[i] = i * i * i;
//    }
//    while (t--) {
//        ll x;
//        cin >> x;
//        int f = 0;
//        for (int i = 1; mm[i] <= x / 2; i++) {//ǰһ���Ҳ�����һ��Ϳ϶��Ҳ�����
//            ll t = x - mm[i];//��һ���ֵ
//            int l = 1, r = 10000;//��ʼ����
//            while (l < r) {
//                int mid = (l + r) / 2;//�е�~
//                if (mm[mid] < t)l = mid + 1;//�����ұ߲���
//                else r = mid;//������߲���
//            }
//            //�ҵ���ʱ��Ӧ����l==r��ʱ�����
//            if (mm[l] == t) {
//                f = 1; break;//����ҵ�
//            }
//
//        }
//        if (f)cout << "YES" << endl;
//        else cout << "NO" << endl;
//    }
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    while (n--) {
//        long long sum;
//        cin >> sum;
//        int flag = 0;
//
//        for (long long a = 1; a * a * a < sum; ++a) {
//            long long cha = sum - a * a * a;
//            long long b = cbrt(cha);
//
//            if (b * b * b == cha) {
//                flag = 1;
//                break;
//            }
//        }
//
//        if (flag) {
//            cout << "YES" << endl;
//        }
//        else {
//            cout << "NO" << endl;
//        }
//    }
//
//    return 0;
//}
//ʹ�ù�ϣ������ң�
//#include <iostream>
//#include <unordered_set>
//#include <cmath>
//
//using namespace std;
//
//bool judge(long long sum) {
//    unordered_set<long long> cubes;
//    for (long long a = 1; a * a * a <= sum; a++) {
//        cubes.insert(a * a * a);
//    }
//    for (long long a = 1; a * a * a <= sum; a++) {
//        long long b = sum - a * a * a;
//        if (cubes.find(b) != cubes.end()) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    while (n--) {
//        long long sum;
//        cin >> sum;
//        if (judge(sum)) {
//            cout << "YES" << endl;
//        }
//        else {
//            cout << "NO" << endl;
//        }
//    }
//    return 0;
//}
