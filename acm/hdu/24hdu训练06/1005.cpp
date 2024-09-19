//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-5.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAX_K = 10;

int nextState(int state, char op) {
    if (op == '+') return (state + 1) % 3;
    if (op == '-') return (state + 2) % 3;
    return state;
}

string stateToString(int state, int k) {
    string result;
    for (int i = 0; i < k; ++i) {
        char c = 'A' + ((state >> (2 * i)) & 3);
        result.push_back(c);
    }
    return result;
}

void solve() {
    int n, k;
    ll M;
    cin >> n >> k >> M;
    vector<string> ops(n);
    for (int i = 0; i < n; ++i) {
        cin >> ops[i];
    }

    unordered_map<int, int> dp;
    dp[0] = 1;

    for (int j = 0; j < n; ++j) {
        unordered_map<int, int> new_dp;
        for (const auto& pair : dp) {
            int current_state = pair.first;
            int current_count = pair.second;
            new_dp[current_state] = (new_dp[current_state] + current_count) % M;

            int new_state = 0;
            for (int i = 0; i < k; ++i) {
                int light_state = (current_state >> (2 * i)) & 3;
                int new_light_state = nextState(light_state, ops[j][i]);
                new_state |= (new_light_state << (2 * i));
            }
            new_dp[new_state] = (new_dp[new_state] + current_count) % M;
        }
        dp.swap(new_dp);
    }

    vector<pair<string, int>> sorted_states;
    for (const auto& p : dp) {
        sorted_states.emplace_back(stateToString(p.first, k), p.second);
    }
    sort(sorted_states.begin(), sorted_states.end());

    for (const auto& p : sorted_states) {
        cout << p.first << " " << p.second << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
