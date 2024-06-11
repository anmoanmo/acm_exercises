//
// Created by 27188 on 24-6-9.
//
#include<bits/stdc++.h>
using namespace std;

void sol() {
    int t; cin >> t;
    while (t--) {
        int n, f, k;    cin >> n >> f >> k;
        vector<int> cubes(n);
        for (int i = 0; i < n; ++i) {
            cin >> cubes[i];
        }
        int favoriet = cubes[f-1];

        sort(cubes.begin(), cubes.end(), [](int a, int b) {
            return a > b;
        });

        int firstPos = -1, lastPos = -1;
        for(int i=0;i<n;i++){
            if(favoriet==cubes[i]){
                if(firstPos == -1){
                    firstPos = i+1;
                }
                lastPos = i+1;
            }
        }

        if(firstPos>k){
            cout<<"NO"<<endl;
        }
        else if(lastPos<=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"MAYBE"<<endl;
        }
    }
}

int main() {
    sol();
    return 0;
}


//void solve() {
//    int n, f, k;
//    std::cin >> n >> f >> k;
//    f--;
//
//    std::vector<int> a(n);
//    for (int i = 0; i < n; i++) {
//        std::cin >> a[i];
//    }
//
//    int gt = 0, eq = 0;
//    for (int i = 0; i < n; i++) {
//        if (a[i] > a[f]) {
//            gt++;
//        } else if (a[i] == a[f]) {
//            eq++;
//        }
//    }
//    if (k <= gt) {
//        std::cout << "NO\n";
//    } else if (k >= gt + eq) {
//        std::cout << "YES\n";
//    } else {
//        std::cout << "MAYBE\n";
//    }
//}
//
//int main() {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//
//    int t;
//    std::cin >> t;
//
//    while (t--) {
//        solve();
//    }
//
//}