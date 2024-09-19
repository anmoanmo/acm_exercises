#include <bits/stdc++.h>

using namespace std;

struct State {
    string L, M, R;
    vector<string> path;
};

string getHash(const State &state) {
    return state.L + state.M + state.R;
}

void swapChars(string &a, string &b, int i, int j) {
    if (i < a.size() and j < b.size()) {
        swap(a[i], b[j]);
    }
}

void bfs(State initial, const State &target) {
    queue<State> q;
    q.push(initial);
    unordered_set<string> vis;
    vis.insert(getHash(initial));
    while (!q.empty()) {
        State cur = q.front();
        q.pop();
        if (cur.L == target.L and cur.M == target.M and cur.R == target.R) {
            for (const string &step: cur.path) {
                cout << step << endl;
            }
            return;
        }

        vector<pair<string, string>> pairs = {{"L", "M"},
                                              {"M", "R"},
                                              {"L", "R"}};
        vector<pair<int, int>> swaps = {{0, 0},
                                        {0, 1},
                                        {1, 0},
                                        {1, 1}};
        for (auto &p: pairs) {
            for (auto &swapPos: swaps) {
                State nextState = cur;
                int i = swapPos.first, j = swapPos.second;

                if (p.first == "L" and p.second == "M") {
                    swapChars(nextState.L, nextState.M, i, j);
                    nextState.path.push_back(nextState.L[i] + string("->L ") + nextState.M[j] + "->M");
                } else if (p.first == "M" and p.second == "R") {
                    swapChars(nextState.M, nextState.R, i, j);
                    nextState.path.push_back(nextState.M[i] + string("->M ") + nextState.R[j] + "->R");
                } else if (p.first == "L" and p.second == "R") {
                    swapChars(nextState.L, nextState.R, i, j);
                    nextState.path.push_back(nextState.L[i] + string("->L ") + nextState.R[j] + "->R");
                }

                string hash = getHash(nextState);
                if (vis.find(hash) == vis.end()) {
                    vis.insert(hash);
                    q.push(nextState);
                }
            }
        }
    }
}

void solve() {
    string in[3], out[3], ambition[3];
    unordered_map<string, string> conversion = {{"0", "34"},
                                                {"3", "04"},
                                                {"4", "03"}};
    for (int i = 0; i < 3; i++) {
        cin >> in[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> out[i];
    }
    for (int i = 0; i < 3; i++) {
        ambition[i] = conversion[in[i]];
    }
    State initial = {out[0], out[1], out[2], {}};
    State target = {ambition[0], ambition[1], ambition[2], {}};
    bfs(initial, target);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt = 1;
    while (tt--) {
        solve();
    }
    return 0;
}