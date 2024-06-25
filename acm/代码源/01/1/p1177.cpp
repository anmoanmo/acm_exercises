//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-22.
//


#include<bits/stdc++.h>

#define ll long long
std::vector<int> a; // 全局向量
using namespace std;
void quicksort(int l, int r) {
    if (l >= r) {
        return;
    }
    // 随机性，避免复杂度在最坏情况降低至n^2
    std::swap(a[l], a[l + rand() % (r - l + 1)]);

    int x = a[l];
    int i = l, j = r;
    while (i < j) {
        while (i < j && a[j] > x) {
            j--;
        }
        if (i < j) {
            a[i++] = a[j];
        }
        while (i < j && a[i] < x) {
            i++;
        }
        if (i < j) {
            a[j--] = a[i];
        }
    }
    a[i] = x;
    quicksort(l, i - 1);
    quicksort(i + 1, r);
}

void sol() {
    int n; cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    quicksort(0, n - 1);
    for (auto i : a) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    srand(time(nullptr)); // 设置随机种子
    sol();
}