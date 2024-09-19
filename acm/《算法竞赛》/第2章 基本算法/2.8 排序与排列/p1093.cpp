//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-24.
//


#include <bits/stdc++.h>

#define ll long long
using namespace std;

struct s {
    int a, b, c;
    int sum;
    int id;

    void compute() {
        sum = a + b + c;
    }
};

void sol() {
    int n;
    cin >> n;
    vector<s> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].a >> v[i].b >> v[i].c;
        v[i].compute();
        v[i].id = i + 1;
    }

    sort(v.begin(), v.end(), [](s a, s b) {
        if (a.sum != b.sum) {
            return a.sum > b.sum;
        } else {
            if (a.a != b.a) {
                return a.a > b.a;
            } else {
                return a.id < b.id;
            }
        }
    });

    for (int i = 0; i < min(5, n); i++) {
        cout << v[i].id << ' ' << v[i].sum << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}
