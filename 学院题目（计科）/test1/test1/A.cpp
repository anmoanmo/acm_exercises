//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t;
//
//    while (t--) {
//        double p, w, s;
//        cin >> p >> w >> s;
//
//        double d = 0.0;
//        if (s >= 250 && s < 500) {
//            d = 0.02;
//        }
//        else if (s >= 500 && s < 1000) {
//            d = 0.05;
//        }
//        else if (s >= 1000 && s < 2000) {
//            d = 0.08;
//        }
//        else if (s >= 2000 && s < 3000) {
//            d = 0.10;
//        }
//        else if (s >= 3000) {
//            d = 0.15;
//        }
//
//        double f = p * w * s * (1 - d);
//        cout << fixed << setprecision(3) << f << endl;
//    }
//
//    return 0;
//}
