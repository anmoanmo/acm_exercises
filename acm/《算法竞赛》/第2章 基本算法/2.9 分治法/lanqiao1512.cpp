//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-31.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;
int sum = 0, m;

void hanoi(char x, char y, char z, int n) {
    if (n == 1) {
        sum++;
        cout << '#' << n << ": " << x << "->" << z << '\n';
        return;
    } else {
        hanoi(x, z, y, n - 1);
        sum++;
        cout << '#' << n << ": " << x << "->" << z << '\n';
        hanoi(y, x, z, n - 1);
    }
}

void sol() {
    int n;
    cin >> n;
    hanoi('A', 'B', 'C', n);
    cout << sum << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}