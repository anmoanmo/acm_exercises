#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//#include<iomanip>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int n, v, t;
//    double min, temp;
//
//    while (cin >> n && n != 0)
//    {
//        min = 1e9; 
//
//        while (n--)
//        {
//            cin >> v >> t;
//            if (t >= 0)
//            {
//                temp = 4.5 / v * 3600 + t;
//                if (temp < min) {
//                    min = temp;
//                }
//            }
//        }
//
//        cout << fixed << setprecision(0) << ceil(min) << endl;
//    }
//
//    return 0;
//}
