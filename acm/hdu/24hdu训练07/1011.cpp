//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-9.
//
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

typedef __int128 int128;


string int128_to_string(int128 value) {
    if (value == 0) return "0";

    string result;
    bool negative = value < 0;

    if (negative) value = -value;

    while (value > 0) {
        result += char(value % 10 + '0');
        value /= 10;
    }

    if (negative) result += '-';

    reverse(result.begin(), result.end());
    return result;
}

void sol() {
    int n = 0;
    int128 s, c;
    long long x, y;
    cin >> x >> y;
    s = x;
    c = y;

    while (s % c != 0) {
        s *= 2;
    }

    int128 sc = s / c;

    cout << int128_to_string(c) << ' ' << int128_to_string(sc) << '\n';
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


