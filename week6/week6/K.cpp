//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cmath>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<iomanip>
//#include<stack>
//#include<map>
//
//#define endl '\n';
//
//#define ll long long    // 定义ll为long long的简写
//#define rint register int // 使用register关键字为int定义一个简写，但这在现代编译器中基本上是过时的
//using namespace std;    // 使用标准命名空间
//stack<int> zhan;        // 定义一个整数堆栈，名为zhan
//
//int main() {
//    int t;  // 测试用例的数量
//    scanf("%d", &t); // 读入测试用例的数量
//    while (t--) {     // 对每一个测试用例进行循环处理
//        int n;    // 输入的行数
//        scanf("%d", &n); // 读入行数
//        int nowline = 0, pos = 0;  // 当前行数和位置变量
//        int Fcnt = 0, Ecnt = 0, cnt = 0;  // F、E和其他的计数器
//        int hisans = 0, myans = 0;     // 历史答案和我的答案
//        int runflag = -1;   // 运行标记，默认为-1
//        bool endflag = false;   // 结束标记，默认为false
//        string tmp;   // 临时字符串，用于读入答案
//        cin >> tmp;
//        string sublist = "0";   // 子列表，默认为"0"
//
//        // 解析答案字符串，提取其中的数字
//        for (rint i = 0; i < tmp.length(); ++i)
//            if (tmp[i] >= '0' && tmp[i] <= '9') {
//                hisans += tmp[i] - '0';
//                hisans *= 10;
//            }
//        hisans /= 10;   // 完成解析
//        if (tmp[2] == '1') hisans = 0;  // 如果答案字符串的第三个字符为1，则历史答案为0
//
//        // 对每一行输入进行解析
//        for (rint i = 1; i <= n; ++i) {
//            string sub, opt, tmpsta, tmpend;   // 定义子字符串、操作、临时开始和临时结束字符串
//            int sta = 0, end = 0;   // 开始和结束的整数表示
//            cin >> opt;   // 读入操作
//
//            // 如果操作为"F"
//            if (opt == "F") {
//                ++Fcnt; ++pos;  // F的计数器和位置变量加一
//                zhan.push(pos);  // 将位置压入堆栈
//                cin >> sub >> tmpsta >> tmpend;   // 读入子字符串和临时的开始和结束字符串
//
//                // 如果结束字符串是'n'并且开始字符串不是'n'，则计数器cnt加一
//                if (tmpend[0] == 'n' && (!(tmpsta[0] == 'n' && tmpend[0] == 'n'))) ++cnt;
//
//                // 解析开始字符串，提取其中的数字
//                for (rint j = 0; j < tmpsta.length(); ++j) {
//                    sta += tmpsta[j] - '0';
//                    sta *= 10;
//                }
//                sta /= 10;  // 完成解析
//
//                // 如果结束字符串是数字
//                if (tmpend[0] != 'n') {
//                    // 解析结束字符串，提取其中的数字
//                    for (rint i = 0; i < tmpend.length(); ++i) {
//                        end += tmpend[i] - '0';
//                        end *= 10;
//                    }
//                    end /= 10;   // 完成解析
//                    // 如果开始数字大于结束数字，则更新运行标记
//                    if (sta > end) runflag = pos;
//                }
//
//                // 更新我的答案
//                if (runflag == -1 || pos < runflag) myans = max(myans, cnt);
//
//                sublist += sub;   // 更新子列表
//
//                // 如果子列表中已经有了子字符串，则输出错误并跳出循环
//                if (sublist.find(sub) != sublist.length() - 1) {
//                    printf("ERR\n"); cnt = 0; nowline = i; endflag = true; break;
//                }
//
//                sta = 0; end = 0;    // 重置开始和结束变量
//            }
//            // 如果操作为"E"
//            else if (opt == "E") {
//                --cnt; ++Ecnt;  // E的计数器加一，其他的计数器减一
//
//                // 如果堆栈为空并且未结束，则输出错误并跳出循环
//                if (zhan.empty() && !endflag) {
//                    printf("ERR\n"); cnt = 0; nowline = i; endflag = true; break;
//                }
//
//                // 如果堆栈的顶部小于或等于运行标记，则更新位置和运行标记
//                if (zhan.top() <= runflag) {
//                    pos = 0;
//                    runflag = -1;
//                }
//
//                // 弹出堆栈的顶部
//                if (!zhan.empty()) zhan.pop();
//
//                // 删除子列表的最后一个字符
//                if (sublist.length() > 0) sublist = sublist.substr(0, sublist.length() - 1);
//
//                // 如果堆栈为空，则计数器重置为0
//                if (zhan.empty()) cnt = 0;
//            }
//        }
//
//        // 如果已经结束，则清空堆栈并跳过余下的输入
//        if (endflag) {
//            cnt = 0;
//            while (!zhan.empty()) zhan.pop();
//            string cnm;
//            for (rint i = 1; i <= n - nowline + 1; ++i) getline(cin, cnm);
//            continue;
//        }
//
//        // 如果F的数量不等于E的数量，则输出错误
//        if (Fcnt != Ecnt) {
//            if (!endflag) printf("ERR\n");
//            while (!zhan.empty()) zhan.pop();
//            cnt = 0;
//            continue;
//        }
//
//        // 清空堆栈
//        while (!zhan.empty()) zhan.pop();
//
//        // 如果没有结束，根据我的答案和历史答案判断输出
//        if (!endflag) {
//            if (myans == hisans) printf("Yes\n");
//            else printf("No\n");
//        }
//
//        // 重置我的答案和历史答案为0
//        myans = hisans = 0;
//    }
//    return 0;
//}


