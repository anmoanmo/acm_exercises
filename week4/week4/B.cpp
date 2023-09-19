#include <iostream>

using namespace std;

int main() {
    long long n;
    while (cin >> n) {
        if (n % 2 == 0) {
            // n为偶数
            long long sum = (n / 2) * (n + 1);
            cout << sum << endl;
        }
        else {
            // n为奇数
            long long sum = -((n + 1) / 2) * ((n + 1) / 2);
            cout << sum << endl;
        }
    }
    return 0;
}
