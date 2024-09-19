//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-22.
//

#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
using LL = long long;


struct node{
    int a, b, c;
    void turn()
    {
        int t;
        while(a != 1 && a != 6){
            t = a, a = b, b = c, c = t;
        }
    }
    bool check()
    {
        return !(a != 1 && a != 6 && b != 1 && b != 6 && c != 1 && c != 6);
    }
    bool operator ==(const node &o)const
    {
        return a == o.a && b == o.b && c == o.c;
    }
};
void solve()
{
    string m[15];
    for(int i = 1; i <= 9; i ++){
        cin >> m[i];
        m[i] = ' ' + m[i];
    }
    node t[] = {{1, 5, 2}, {1, 4, 5}, {1, 2, 3}, {1, 3, 4},
                {6, 3, 2}, {6, 4, 3}, {6, 2, 5}, {6, 5, 4}
    };
    node p[] = {{m[1][4], m[4][12], m[4][1]},
                {m[1][6], m[4][9], m[4][10]},
                {m[4][4], m[3][4], m[4][3]},
                {m[3][6], m[4][6], m[4][7]},
                {m[7][4], m[6][4], m[6][3]},
                {m[6][7], m[6][6], m[7][6]},
                {m[9][4], m[6][1], m[6][12]},
                {m[6][9], m[9][6], m[6][10]}
    };
    for(auto [a, b, c] : p){
        //cout << x.a << ' ' << x.b << ' ' << x.c << '\n';
        node x = {a - '0', b - '0', c - '0'};
        bool ok = 0;
        if(x.check()){
            x.turn();
            for(auto y : t) if(x == y) ok = 1;
        }
        if(ok) continue;
        int ans[] = {x.a, x.b, x.c};
        sort(ans, ans + 3);
        for(auto i : ans) cout << i << ' ';
        cout << '\n';
        return ;
    }

    cout << "No problem\n";
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int Case; cin >> Case;
    while(Case --) solve();
    return 0;
}