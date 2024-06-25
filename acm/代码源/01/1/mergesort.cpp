//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-22.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

//void Merge(std::vector<int>& sourceArr, std::vector<int>& tempArr, int startIndex, int midIndex, int endIndex) {
//    int i = startIndex, j = midIndex + 1, k = startIndex;
//    while (i != midIndex + 1 && j != endIndex + 1) {
//        if (sourceArr[i] > sourceArr[j])
//            tempArr[k++] = sourceArr[j++];
//        else
//            tempArr[k++] = sourceArr[i++];
//    }
//    while (i != midIndex + 1)
//        tempArr[k++] = sourceArr[i++];
//    while (j != endIndex + 1)
//        tempArr[k++] = sourceArr[j++];
//    for (i = startIndex; i <= endIndex; i++)
//        sourceArr[i] = tempArr[i];
//}
//
//void MergeSort(std::vector<int>& sourceArr, std::vector<int>& tempArr, int startIndex, int endIndex) {
//    int midIndex;
//    if (startIndex < endIndex) {
//        midIndex = startIndex + (endIndex - startIndex) / 2; // 避免溢出int
//        MergeSort(sourceArr, tempArr, startIndex, midIndex);
//        MergeSort(sourceArr, tempArr, midIndex + 1, endIndex);
//        Merge(sourceArr, tempArr, startIndex, midIndex, endIndex);
//    }
//}

void merge(vector<int> &source, vector<int> &temp, int startIndex, int endIndex, int midIndex) {
    int i = startIndex, j = midIndex + 1, k = startIndex;
    while (i != midIndex + 1 && j != endIndex + 1) {
        if (source[i] > source[j]) {
            temp[k++] = source[j++];
        }
        if (source[i] < source[j]) {
            temp[k++] = source[i++];
        }
    }
    while (i != midIndex + 1) {
        temp[k++] = source[i++];
    }
    while (j != endIndex + 1) {
        temp[k++] = source[j++];
    }
    for (int f = startIndex; f <= endIndex; f++) {
        source[f] = temp[f];
    }
}

void mergesort(vector<int> &source, vector<int> &temp, int startIndex, int endIndex) {
    int midIndex;
    if (startIndex < endIndex) {
        midIndex = startIndex + (endIndex - startIndex) / 2;
        mergesort(source, temp, startIndex, midIndex);
        mergesort(source, temp, midIndex + 1, endIndex);
        merge(source, temp, startIndex, endIndex, midIndex);
    }
}

// 示例调用
int main() {
    std::vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    std::vector<int> temp(arr.size());
    mergesort(arr, temp, 0, arr.size() - 1);
    for (int num: arr) {
        std::cout << num << " ";
    }
    cout<<"排列完毕！\n";
    return 0;
}

//int main() {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//
//    int t = 0;
//    std::cin >> t;
//    while (t--) {
//        sol();
//    }
//}