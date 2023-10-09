//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//const int rule[5][5] = {
//    {0, 1, 2, 2, 1},
//    {2, 0, 1, 2, 1},
//    {1, 2, 0, 1, 2},
//    {1, 1, 2, 0, 2},
//    {2, 2, 1, 1, 0},
//};
//
//void match(int a, int b, int c) {
//    vector<int> v1(b), v2(c);
//    for (int i = 0; i < b; i++) {
//        int x;
//        cin >> x;
//        v1[i] = x;
//    }
//    for (int i = 0; i < c; i++) {
//        int x;
//        cin >> x;
//        v2[i] = x;
//    }
//    int count1 = 0, count2 = 0;
//    for (int i = 0; i < a; i++) {
//        int result = rule[v1[i % b]][v2[i % c]];
//        if (result == 2) {
//            count1++;
//        }
//        else if (result == 1) {
//            count2++;
//        }
//    }
//    cout << count1 << " " << count2 << '\n';
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int n = 0, n1 = 0, n2 = 0;
//    cin >> n >> n1 >> n2;
//    match(n, n1, n2);
//
//    return 0;
//}

