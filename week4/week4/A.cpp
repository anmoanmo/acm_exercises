#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        long long sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += ((i % 2 != 0) ? (-i) : i);
        }
        cout << sum << endl;
    }
    return 0;
}

