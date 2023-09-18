//网上流传一句话:"常在网上飘啊，哪能不挨刀啊～"。
// 其实要想能安安心心地上网其实也不难，学点安全知识就可以。
//首先，我们就要设置一个安全的密码。
// 那什么样的密码才叫安全的呢？
// 一般来说一个比较安全的密码至少应该满足下面两个条件：
//(1).密码长度大于等于8，且不要超过16。
//(2).密码中的字符应该来自下面“字符类别”中四组中的至少三组。
//这四个字符类别分别为：
//1.大写字母：A, B, C...Z;
//2.小写字母：a, b, c...z;
//3.数字：0, 1, 2...9;
//4.特殊符号：~, !, @, #, $, %, ^;
//
//给你一个密码，你的任务就是判断它是不是一个安全的密码。
//输入数据第一行包含一个数M，接下有M行，
//每行一个密码（长度最大可能为50），密码仅包括上面的四类字符。
//对于每个测试实例，判断这个密码是不是一个安全的密码，
//是的话输出YES，否则输出NO。
//#include<iostream>
//#include<string>
//using namespace std;
//
//// 检查一个字符是否为大写字母
//bool isUpperCase(char c) {
//    return (c >= 'A' && c <= 'Z');
//}
//
//// 检查一个字符是否为小写字母
//bool isLowerCase(char c) {
//    return (c >= 'a' && c <= 'z');
//}
//
//// 检查一个字符是否为数字
//bool isDigit(char c) {
//    return (c >= '0' && c <= '9');
//}
//
//// 检查一个字符是否为特殊符号
//bool isSpecialChar(char c) {
//    string specialChars = "~!@#$%^";
//    return (specialChars.find(c) != string::npos);
//}
//
//// 计算一个整数中设置位的数量
//int count(int num) {
//    int count = 0;
//    while (num) {
//        count += num & 1;
//        num >>= 1;
//    }
//    return count;
//}
//
//// 检查一个密码是否安全
//bool isSecurePassword(string password) {
//    if (password.length() < 8 || password.length() > 16) {
//        return false;
//    }
//
//    int flag = 0; // 记录字符类别的数量
//
//    for (char c : password) {
//        if (isUpperCase(c)) {
//            flag |= 1 << 0; // 设置第1位表示大写字母
//        }
//        else if (isLowerCase(c)) {
//            flag |= 1 << 1; // 设置第2位表示小写字母
//        }
//        else if (isDigit(c)) {
//            flag |= 1 << 2; // 设置第3位表示数字
//        }
//        else if (isSpecialChar(c)) {
//            flag |= 1 << 3; // 设置第4位表示特殊符号
//        }
//    }
//
//    return count(flag) >= 3; 
//}
//int main() {
//    int M;
//    cin >> M;
//
//    for (int i = 0; i < M; i++) {
//        string password;
//        cin >> password;
//
//        if (isSecurePassword(password)) {
//            cout << "YES" << endl;
//        }
//        else {
//            cout << "NO" << endl;
//        }
//    }
//
//    return 0;
//}
