#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define buff ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define ll long long
#define int ll
const int N = 2e5 + 7;

struct State
{
    string L, M, R;
    vector<pair<string, string>> path;

    bool operator<(const State &other) const
    {
        if (path.size() != other.path.size())
        {
            return path.size() > other.path.size();
        }
        return path > other.path;
    }
};

string getHash(const State &state)
{
    string sortedL = state.L, sortedM = state.M, sortedR = state.R;
    sort(sortedL.begin(), sortedL.end());
    sort(sortedM.begin(), sortedM.end());
    sort(sortedR.begin(), sortedR.end());
    return sortedL + sortedM + sortedR;
}

bool isValidSwap(const string &a, const string &b, int i, int j)
{
    return i < a.size() && j < b.size();
}

void swapChars(string &a, string &b, int i, int j)
{
    if (isValidSwap(a, b, i, j))
    {
        swap(a[i], b[j]);
    }
}

void bfs(State initial, const State &target)
{
    priority_queue<State> pq;
    pq.push(initial);
    unordered_set<string> vis;
    vis.insert(getHash(initial));

    while (!pq.empty())
    {
        State cur = pq.top();
        pq.pop();
        string sortedL = cur.L, sortedM = cur.M, sortedR = cur.R;
        string targetL = target.L, targetM = target.M, targetR = target.R;
        sort(sortedL.begin(), sortedL.end());
        sort(sortedM.begin(), sortedM.end());
        sort(sortedR.begin(), sortedR.end());
        sort(targetL.begin(), targetL.end());
        sort(targetM.begin(), targetM.end());
        sort(targetR.begin(), targetR.end());
        if (sortedL == targetL && sortedM == targetM && sortedR == targetR)
        {
            for (const auto &step: cur.path)
            {
                cout << step.first << ' ' << step.second << endl;
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

        for (auto &p: pairs)
        {
            for (auto &swapPos: swaps)
            {
                State nextState = cur;
                int i = swapPos.first, j = swapPos.second;
                string stepL, stepR;

                if (p.first == "L" && p.second == "M" && isValidSwap(nextState.L, nextState.M, i, j))
                {
                    stepL = string(1, nextState.L[i]) + "->L";
                    stepR = string(1, nextState.M[j]) + "->M";
                    swapChars(nextState.L, nextState.M, i, j);
                }
                else if (p.first == "M" && p.second == "R" && isValidSwap(nextState.M, nextState.R, i, j))
                {
                    stepL = string(1, nextState.M[i]) + "->M";
                    stepR = string(1, nextState.R[j]) + "->R";
                    swapChars(nextState.M, nextState.R, i, j);
                }
                else if (p.first == "L" && p.second == "R" && isValidSwap(nextState.L, nextState.R, i, j))
                {
                    stepL = string(1, nextState.L[i]) + "->L";
                    stepR = string(1, nextState.R[j]) + "->R";
                    swapChars(nextState.L, nextState.R, i, j);
                }
                else
                {
                    continue;
                }
                vector<pair<string, string>> newPath = cur.path;
                if (stepL < stepR)
                {
                    newPath.push_back({stepL, stepR});
                }
                else
                {
                    newPath.push_back({stepR, stepL});
                }
                sort(newPath.begin(), newPath.end());

                nextState.path = newPath;
                string hash = getHash(nextState);
                if (vis.find(hash) == vis.end())
                {
                    vis.insert(hash);
                    pq.push(nextState);
                }
            }
        }
    }
}


void solve()
{
    string in[3], out[3], ambition[3];
    unordered_map<string, string> conversion = {{"0", "34"},
                                                {"3", "04"},
                                                {"4", "03"}};

    cout << "输入内场从左到右的平面图案 圆0 方4 三角3 以空格分隔 例如：3 0 4" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> in[i];
    }
    cout << "输入外场从左到右的组合图形 以空格分隔 30和03是等效的 其余同理 例如：30 04 34" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> out[i];
    }
    cout << "a->L b->M代表将a图形塞入左侧（left） 将b图形塞入右侧（mid）" << endl;
    cout << "--------------------------------------------------------" << endl;
    for (int i = 0; i < 3; i++)
    {
        ambition[i] = conversion[in[i]];
    }
    State initial = {out[0], out[1], out[2], {}};
    State target = {ambition[0], ambition[1], ambition[2], {}};
    bfs(initial, target);
    system("pause");
}

signed main()
{
    // buff;
    int tt = 1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
