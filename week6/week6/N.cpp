//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<iomanip>
//
//#define endl '\n';
//
//struct heap {
//    int m;
//    int v;
//};
//
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int n = 0, t = 0;
//    heap h[100] = { {0,0} };
//    vector<double> avg;
//
//    cin >> n >> t; 
//
//    for (int i = 0; i < n; i++) {
//        cin >> h[i].m >> h[i].v;
//        avg.push_back(static_cast<double>(h[i].v) / h[i].m);
//    }
//
//    sort(avg.begin(), avg.end(), greater<double>());
//
//    double max = 0.0; 
//    int weight_now = 0; 
//
//    for (int i = 0; i < n; i++) {
//        if (weight_now + h[i].m <= t) { 
//            max += h[i].v;
//            weight_now += h[i].m;
//        }
//        else { 
//            max += avg[i] * (t - weight_now);
//            break;
//        }
//    }
//
//    cout << fixed << setprecision(2) << max << endl; 
//
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<iomanip>
//
//#define endl '\n';
//
//struct heap {
//    int m;
//    int v;
//};
//
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int n = 0, t = 0;
//    heap h[101] = { {0,0} };
//    vector<double> avg(101,0);
//
//    cin >> n >> t;
//
//    for (int i = 0; i < n; i++) {
//        cin >> h[i].m >> h[i].v;
//        avg.push_back(static_cast<double>(h[i].v) / h[i].m);
//    }
//
//    sort(avg.begin(), avg.end(), greater<double>());
//
//    double max = 0.0;
//    double weight_now = 0;
//
//    for (int i = 0; i < n; i++) {
//        if (weight_now + h[i].m <= t) {
//            max += h[i].v;
//            weight_now += h[i].m;
//        }
//        else {
//            max += avg[i] * (t - weight_now); 
//            break;
//        }
//    }
//
//    cout << fixed << setprecision(2) << max << endl;
//
//    return 0;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<iomanip>
//#include<cmath>
//using namespace std;
//
//int n, t;
//int m[101], v[101];
//double c[101], f[1001];
//
//void solve() {
//    for (int i = 1; i <= n; i++) {
//        for (int j = t; j >= 1; j--) {
//            for (int k = 1; k <= min(m[i], j); k++) {
//                f[j] = max(f[j], f[j - k] + k * c[i]);
//            }
//        }
//    }
//}
//
//int main() {
//    cin >> n >> t;
//    for (int i = 1; i <= n; i++) {
//        cin >> m[i] >> v[i];
//        c[i] = (double)v[i] / m[i];
//    }
//
//    solve();
//
//    printf("%.2lf", f[t]);
//
//    return 0;
//}
//
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<iomanip>
//
//#define endl '\n';
//
//struct heap {
//    int m;
//    int v;
//    double vm = static_cast<double>(v / m);
//};
//
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int n = 0, t = 0;
//    heap h[101] = { {0,0,0} };
//    vector<heap> avg;
//
//    cin >> n >> t;
//
//    for (int i = 0; i < n; i++) {
//        cin >> h[i].m >> h[i].v;
//        avg.push_back(h[i]);
//    }
//
//    sort(avg.begin(), avg.end(), greater<double>());
//
//    double max = 0.0;
//    double weight_now = 0;
//
//    for (int i = 0; i < n; i++) {
//        if (weight_now + h[i].m <= t) {
//            max += h[i].v;
//            weight_now += h[i].m;
//        }
//        else {
//            max += h[i].vm * (t - weight_now);
//            break;
//        }
//    }
//
//    cout << fixed << setprecision(2) << max << endl;
//
//    return 0;
//}