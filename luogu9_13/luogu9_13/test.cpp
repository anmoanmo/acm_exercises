//#include<iostream>
//using namespace std;
//int main()
//{
//    std::cout << R"(                ********
//               ************
//               ####....#.
//             #..###.....##....
//             ###.......######              ###            ###
//                ...........               #...#          #...#
//               ##*#######                 #.#.#          #.#.#
//            ####*******######             #.#.#          #.#.#
//           ...#***.****.*###....          #...#          #...#
//           ....**********##.....           ###            ###
//           ....****    *****....
//             ####        ####
//           ######        ######
//##############################################################
//#...#......#.##...#......#.##...#......#.##------------------#
//###########################################------------------#
//#..#....#....##..#....#....##..#....#....#####################
//##########################################    #----------#
//#.....#......##.....#......##.....#......#    #----------#
//##########################################    #----------#
//#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#
//##########################################    ############ )";
//}
//#include <iostream>
//#include <string>
//const int N = 1007;
//using namespace std;
//
//struct stu
//{
//    string name;
//    int yu, shu, ying, score;
//};
//
//int main()
//{
//    int n = 0, max = 0;
//    cin >> n;
//
//    stu arr[N];
//
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i].name >> arr[i].yu >> arr[i].shu >> arr[i].ying;
//        arr[i].score = arr[i].yu + arr[i].shu + arr[i].ying;
//    }
//
//    int flag = 0;
//    for (int i = 0; i < n; i++) {
//        if (arr[i].score > max) {
//            max = arr[i].score;
//            flag = i;
//        }
//    }
//
//    cout << arr[flag].name << " " << arr[flag].yu << " " << arr[flag].shu << " " << arr[flag].ying  << endl;
//
//    return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char a;
//    cin >> a;
//    cout << "  " << a << "  " << endl;
//    cout << " " << a << a << a << endl;
//    cout << a << a << a << a << a << endl;
//
//    return 0; 
//}
//#include<iostream>
//
//using namespace std;
//
//int main() {
//    char n;
//    cin >> n;
//    n = toupper(n);
//    cout << toupper(n) << endl;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string a = "";
//	getline(cin, a);
//	for (int i = 0; i < a.length(); i++) {
//		cout << a[a.length() - i-1];
//	}
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string a ;
//	cin >> a;
//	for (int i = a.length() - 1; i >= 0; i--) {
//		cout << a[i];
//	}
//	return 0;
//}
//#include <iostream>
//#include <iomanip>
//#include<cmath>
//using namespace std;
//
//int main() {
//    double a = 0, b = 0, c = 0;
//    cin >> a >> b >> c;
//    double p = 0;
//    p = (a + b + c) / 2;
//    double sqare = sqrt(p * (p - a) * (p - b) * (p - c));
//    cout << fixed << setprecision(1) << sqare << endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main() {
//	int s = 0 , v = 0;
//	cin >> s >> v;
//	int minConsume = s / v + 11;
//	int hour=8, min=0;
//	int hourConsume = minConsume / 60;
//	minConsume %= 60;
//	if ((hour -1 - hourConsume) < 0) {
//		cout << 24 + hour -1 - hourConsume << ':' << 60 + min - minConsume << endl;
//	}
//	else {
//		cout << 0 << hour - 1 - hourConsume << ":" << 60 + min - minConsume;
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main() {
//	int s = 0, v = 0;
//	cin >> s >> v;
//	int minConsume = s / v + 10;
//	if (s % v > 0) {
//		minConsume += 1;
//	}
//	int hour = 8, min = 0;
//	int hourConsume = minConsume / 60;
//	if (min < minConsume) {
//		min = 60;
//		hour -= (hourConsume+1);
//		while(hour<0){
//			//这里可以理解为(hourConsume+1) -=8
//			hourConsume -= 7;
//				hour = 24;
//				hour -= hourConsume;
//				hourConsume -= 24;
//			}
//	}
//	minConsume %= 60;
//	min -= minConsume;
//	// 输出时间
//	if (hour < 10) {
//		cout << '0';
//	}
//	cout << hour << ":";
//
//	if (min < 10) {
//		cout << '0';
//	}
//	cout << min << endl;
//	return 0;
//}
#include<iostream>

using namespace std;

const double pi = 3.14;

int main() {
    int h = 0, r = 0;
    cin >> h >> r;

    // 计算小圆桶的容积，不进行单位转换
    double v = pi * r * r * h;

    // 计算所需的最小桶数，使用升作为单位
    int num = (20000 + v - 1) / v;

    cout << num << endl;

    return 0;
}
