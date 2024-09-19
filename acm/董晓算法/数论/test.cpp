//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-4.
//


#include<bits/stdc++.h>

using namespace std;

int main() {
    int s, v;
    cin >> s >> v;
    int t = s % v == 0 ? s / v : s / v + 1;
    if (t <= 470) {
        int h = (470 - t) / 60;
        int m = (470 - t) % 60;
        printf("%02d:%02d", h, m);
    } else {
        int h = (1440 + 470 - t) / 60;
        int m = (1440 + 470 - t) % 60;
        printf("%02d:%02d", h, m);
    }
}