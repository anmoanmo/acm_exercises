//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//struct minister {
//    int l;
//    int r;
//    bool operator<(const minister& a)const{
//        return l * r < a.l * a.r;
//    }
//};
//
//
//int n;
//vector<minister> a;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    cin >> n;
//    a.resize(n + 1); // 将向量的大小设置为n+1
//    for (int i = 0; i <= n; i++) {
//        cin >> a[i].l >> a[i].r;
//    }
//
//    long long ans = 0, now = a[0].l;
//
//    sort(a.begin() + 1, a.end()); 
//    for (int i = 1; i <= n; i++) {
//        ans = max(ans, now / a[i].r);
//        now *= a[i].l; 
//    }
//
//    cout << ans << endl;
//
//    return 0;
//}
