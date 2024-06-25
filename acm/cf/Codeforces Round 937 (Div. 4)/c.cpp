//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-19.
//


#include<bits/stdc++.h>

#define ll long long

void sol() {
    using namespace std;
    string s; cin >> s;
    int h = (s[0] - '0') * 10 + (s[1] - '0');
    int m = (s[3] - '0') * 10 + (s[4] - '0');

    if(h < 12){
        if(h==0){
            h=12;
        }
        cout << (h < 10 ? "0" : "") << h << ':';
        cout << (m < 10 ? "0" : "") << m;
        cout << " AM\n";
    } else {
        if(h > 12) h -= 12;
        cout << (h < 10 ? "0" : "") << h << ':';
        cout << (m < 10 ? "0" : "") << m;
        cout << " PM\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 0;
    std::cin >> t;
    while (t--) {
        sol();
    }
}
