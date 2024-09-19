#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 505;


void op(string& s, const string& op) {
    for (int i = 0; i < s.size(); i++) {
        if (op[i] == '-') {
            s[i] = s[i] == 'A' ? 'C' : s[i] - 1;
        } else if (op[i] == '+') {
            s[i] = s[i] == 'C' ? 'A' : s[i] + 1;
        }
    }
}

void sol() {
    int n, k;
    ll M;
    cin >> n >> k >> M;
    vector<string> ops(n);
    map<string, int> m;

    for (int i = 0; i < n; i++) {
        cin >> ops[i];
    }

    int combinations = 1 << n;
    string init(k, 'A');

    for (int mask = 0; mask < combinations; mask++) {
        string state = init;
        for (int j = 0; j < n; j++) {
            if (mask & (1 << j)) {
                op(state, ops[j]);
            }
        }
        m[state] = (m[state] + 1) % M;
    }


    for (auto& p : m) {
        cout << p.first << " " << p.second << "\n";
    }
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
