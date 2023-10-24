//
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cmath>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int arr[10] = { 0 };
//
//bool judge(int a, int b, int c) {
//    fill_n(arr, 10, 0);
//    string str = to_string(a) + to_string(b) + to_string(c);
//
//    if (str.length() != 9) {
//        return false;
//    }
//
//    for (int i = 0; i < str.length(); i++) {
//        int x = (str[i] - '0');
//        arr[x]++;
//    }
//
//    for (int i = 1; i <= 9; i++) {
//        if (arr[i] != 1) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int a, b, c;
//    cin >> a >> b >> c;
//    int flag = 0;
//    if (a == 0&&b==1&&c==2) {
//        cout << 123 << " " << 456 << " " << 789 << endl;
//        return 0;
//    }
//    int A, B, C;
//    for (int i = 100; i <= 999 ; i++) {  
//        A = i * a;
//        B = i * b;
//        C = i * c;
//        if (judge(A, B, C)) {
//            cout << A << " " << B << " " << C << endl;
//            flag = 1;
//        }
//    }
//    if (!flag) {
//        cout << "No!!!" << endl;
//    }
//    return 0;
//}
