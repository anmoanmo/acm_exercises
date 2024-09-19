//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-18.
//

#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

void sol() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'e') {
            if(i+1==n){
                cout<<s[i];
                break;
            }
            else if(i+2==n){
                cout<<s[i]<<s[i+1];
                break;
            }
            else{
                if ((s[i + 2] == 'a' || s[i + 2] == 'e')) {
                    cout << s[i] << '.';
                    continue;
                } else {
                    cout << s[i] << s[i + 1] << '.';
                    i++;
                    continue;
                }
            }
        }
        cout << s[i];
    }
    cout << '\n';
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