//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-23.
//


#include<iostream>
#include<vector>
using namespace std;
using ll = long long;

void sol() {
    int t;
    while (cin >> t && t != 0) {
        vector<int> v(t+1);
        vector<int> D(t + 2);

        for (int i = 1; i <= t; i++) {
            int x, y;
            cin >> x >> y;
            D[x]++, D[y + 1]--;
        }

//        for (int i = 1; i <= t; i++) {
//            D[i] = D[i-1] + D[i] ;
//            cout<<D[i]<<' ';
//        }
        cout << '\n';

    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    sol();
}