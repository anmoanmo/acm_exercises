//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct Robot {
//    int x, y;
//    int dir; // 0: E, 1: S, 2: W, 3: N
//};
//
//int dx[] = { 1, 0, -1, 0 }; //表示东南西北方向的模拟
//int dy[] = { 0, -1, 0, 1 };
//
//int main() {
//    int k, a, b, n, m;
//    cin >> k;
//
//    int num, frequency;
//    char act;
//
//    while (k--) {
//        cin >> a >> b; //仓库的长宽
//        cin >> n >> m; //机器人数量与指令的数量
//
//        vector<Robot> robots(n + 5); 
//
//        for (int i = 1; i <= n; i++) {
//            cin >> robots[i].x >> robots[i].y >> act;
//            if (act == 'E') robots[i].dir = 0;
//            else if (act == 'S') robots[i].dir = 1;
//            else if (act == 'W') robots[i].dir = 2;
//            else robots[i].dir = 3;
//        }
//
//        bool crash = false;
//        for (int i = 1; i <= m ; i++) {
//            cin >> num >> act >> frequency;
//            if (crash) {
//                continue;
//            }
//            while (frequency-- && !crash) {
//                if (act == 'L') {
//                    robots[num].dir = (robots[num].dir + 3) % 4;
//                }
//                else if (act == 'R') {
//                    robots[num].dir = (robots[num].dir + 1) % 4;
//                }
//                else {
//                    int nx = robots[num].x + dx[robots[num].dir];
//                    int ny = robots[num].y + dy[robots[num].dir];
//
//                    for (int j = 1; j <= n; j++) {
//                        if (j != num && nx == robots[j].x && ny == robots[j].y) {
//                            cout << "Robot " << num << " crashes into robot " << j << endl;
//                            crash = true;
//                        }
//                    }
//
//                    if (nx < 1 || nx > a || ny < 1 || ny > b) {           
//                        cout << "Robot " << num << " crashes into the wall" << endl;
//                        crash = true;
//                    }
//
//                    if (!crash) {
//                        robots[num].x = nx;
//                        robots[num].y = ny;
//                    }
//                }
//            }
//        }
//
//        if (!crash) {
//            cout << "OK" << endl;
//        }
//    }
//
//    return 0;
//}

