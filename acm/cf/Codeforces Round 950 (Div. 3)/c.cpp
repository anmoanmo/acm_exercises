//
// Created by 27188 on 24-6-9.
//
#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n = 0;
    cin >> n;
    vector<int> before(n);
    vector<int> after(n);
    for(int i = 0; i < n; i++){
        cin >> before[i];
    }
    for(int i = 0; i < n; i++){
        cin >> after[i];
    }

    int operators = 0;
    cin >> operators;
    vector<int> op(operators);
    for(int i = 0; i < operators; i++){
        cin >> op[i];
    }

    bool flag = true;
    if(find(after.begin(), after.end(), op[operators - 1]) == after.end()){
        cout << "NO\n";
        return;
    }

    multiset<int> s(op.begin(), op.end());

    //   慢了
    //    for(int i=0;i<n;i++){
//        vector<int>::iterator it = find(op.begin(),op.end(),after[i]);
//        if(before[i]!=after[i]){
//            if(it==op.end()){
//                flag = false;
//            }
//        }
//        op.erase(it);
//    }

    for (int i = 0; i < n; i++) {
        if (before[i] != after[i]) {
            auto it = s.find(after[i]);
            if (it != s.end()) {
                s.erase(it);
            } else {
                flag = false;
                cout << "NO" << endl;
                return;
            }
        }
    }

    if(flag){
        cout << "YES" << endl;
    }
}

int main(){
    int t = 0;
    cin >> t;
    while(t--){
        sol();
    }
    return 0;
}



//void solve() {
//    int n;
//    std::cin >> n;
//
//    std::vector<int> a(n), b(n);
//    for (int i = 0; i < n; i++) {
//        std::cin >> a[i];
//    }
//    for (int i = 0; i < n; i++) {
//        std::cin >> b[i];
//    }
//
//    int m;
//    std::cin >> m;
//
//    std::vector<int> d(m);
//    for (int i = 0; i < m; i++) {
//        std::cin >> d[i];
//    }
//
//    int ans = 1;
//    if (std::find(b.begin(), b.end(), d[m - 1]) == b.end()) {
//        ans = 0;
//    }
//    std::multiset s(d.begin(), d.end());
//    for (int i = 0; i < n; i++) {
//        if (b[i] != a[i]) {
//            if (!s.contains(b[i])) {
//                ans = 0;
//            }
//            s.extract(b[i]);
//        }
//    }
//    if (ans) {
//        std::cout << "YES\n";
//    } else {
//        std::cout << "NO\n";
//    }
//}