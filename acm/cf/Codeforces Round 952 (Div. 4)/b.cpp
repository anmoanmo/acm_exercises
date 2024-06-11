//
// Created by 27188 on 24-6-11.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        int best = 2;

        for (int x = 2; x <= n; x++) {
            int k = n / x;
            long long sumX = (long long)x * k * (k + 1) / 2;
            if (sumX > sum) {
                sum = sumX;
                best = x;
            }
        }

        cout << best << endl;
    }

    return 0;
}
