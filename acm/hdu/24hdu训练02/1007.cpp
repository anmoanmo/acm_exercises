//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-22.
//


#include<iostream>
using namespace std;
using LL = long long;

void solve()
{
    string s; cin >> s;
    int p = 0;
    for(int i = 0; i < s.size(); i ++){
        if(s[i] == ':'){
            p = i + 3;
            break;
        }
        cout << s[i];
    }
    cout << '\n';
    for(int i = p; i < s.size(); i ++){
        if(s[i] == '/'){
            p = i + 1;
            break;
        }
        cout << s[i];
    }
    cout << '\n';
    for(int i = p; i < s.size(); i ++){
        if(s[i] == '/'){
            p = i + 1;
            break;
        }
        cout << s[i];
    }
    cout << '\n';
    for(int i = p; i < s.size(); i ++){
        if(s[i] == '/'){
            p = i + 1;
            break;
        }
        cout << s[i];
    }
    cout << '\n';
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int Case; cin >> Case;
    while(Case --) solve();
    return 0;
}