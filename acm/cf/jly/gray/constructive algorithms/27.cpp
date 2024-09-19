//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-31.
//


#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct node{
    int data,id;
};

void sol() {
    int n;
    cin >> n;

    vector<node> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].data;
        a[i].id = i;
    }
    sort(a.begin(),a.end(),[](node i,node j){
        return i.data>j.data;
    });

    vector<int> ans(n , 0);
    int f = 1;
    for (auto i: a) {
        ans[i.id] = f++;
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
    cout << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        sol();
    }

    return 0;
}