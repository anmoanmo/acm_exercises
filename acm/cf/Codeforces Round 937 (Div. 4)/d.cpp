#include <bits/stdc++.h>
using namespace std;

#define ll long long

string d(int n){
    string result;
    while(n>0){
        result += to_string(n%2);
        n/=2;
    }

    reverse(result.begin(),result.end());
    return result;
}

void sol() {
    int n; cin >> n;
    if (n == 1) {
        cout << "YES\n";
        return;
    }
    string s = to_string(n);

    vector<int> bit;
    for (int i = 2; i <= 31; i++) {
        bit.push_back(stoi(d(i)));
    }
    if(find(bit.begin(),bit.end(),n)!=bit.end()){
        cout << "YES\n";
        return;
    }
    int i = 0;
    while (n > 1 && i < bit.size()) {
        if (n % bit[i] == 0) {
            n /= bit[i];
        } else {
            i++;
        }
    }

    if (n == 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
