//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-16.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<int> v(n);
    int index=0,max=0,before_one=max;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i]>max){
            before_one = max;
            max=v[i];
            index = i;
        }
    }
    if(index == n-1){
        cout<<before_one+v[n-1]<<'\n';
    }else{
        cout<<max+v[n-1]<<'\n';
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        sol();
    }
}