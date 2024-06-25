//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-20.
//

// 快排板子
#include<bits/stdc++.h>

#define ll long long

//void quicksort(int l, int r) {
//    if (l >= r) {
//        return;
//    }
//    // 随机性，避免复杂度在最坏情况降低至n2
//    swap(a[l],a[l+rand()%(r-l+1)]);
//
//    int x = a[l];
//    int i = l, j = r;
//    while (i < j) {
//        while (i < j && a[j] > x) {
//            j--;
//        }
//        if (i < j) {
//            a[i++] = a[j]
//        }
//        while (i < j && a[i] < x) {
//            i++;
//        }
//        if (i < j) {
//            a[j--] = a[i];
//        }
//    }
//    a[i] = x;
//    quicksort(l, i - 1);
//    quicksort(i + 1, r);
//}

void quick_sort(int l, int r) {
    if (l >= r) {
        return;
    }
    swap(a[l], a[rand() % (r - l + 1) + l]);
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
    quick_sort(l, i - 1);
    quick_sort(i + 1, r);
}

void sol() {
    using namespace std;

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 0;
    std::cin >> t;
    while (t--) {
        sol();
    }
}