//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    long long n, q;
//    cin >> n >> q;
//    string s;
//    cin >> s;
//
//    while (q--) {
//        long long begin, range;
//        cin >> begin >> range;
//
//        string snew = s.substr(begin - 1, range);
//        long long num = (long long)stoll(snew);
//        num %= 9;
//        cout << num << '\n';
//    }
//        return 0;
//    
//}

//
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main() {
//    long long n, q;
//    cin >> n >> q;
//    string s;
//    cin >> s;
//
//    while (q--) {
//        long long begin, end;
//        cin >> begin >> end;
//        string strnew = s.substr(begin - 1, end-begin+1);
//
//        long long sum = 0;
//        vector<long long> v;
//
//        for (char c : strnew) {
//            // 将字符转换为数字
//            long long num = c - '0';
//            v.push_back(num);
//            if (v.back() == 0&&v.size()==1) {
//                v.pop_back();
//            }
//        }
//
//        for (long long digit : v) {
//            sum += digit;
//        }
//
//        // 计算模9
//        long long num = sum % 9;
//        cout << num << '\n';
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main() {
//    long long n, q;
//    cin >> n >> q;
//    string s;
//    cin >> s;
//
//    while (q--) {
//        long long begin, end;
//        cin >> begin >> end;
//        string strnew = s.substr(begin - 1, end - begin + 1);
//
//        long long sum = 0;
//        sum = stoll(strnew);
//
//        // 计算模9
//        long long num = sum % 9;
//        cout << num << '\n';
//    }
//
//    return 0;
//}


////前缀和
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main() {
//    long long n, q;
//    cin >> n >> q;
//    string s;
//    cin >> s;
//
//    vector<long long> sumnew(n + 1, 0);
//    for (int i = 1; i <= n; i++) {
//        sumnew[i] = sumnew[i - 1] + (s[i - 1] - '0');
//    }
//
//    while (q--) {
//        long long begin, end;
//        cin >> begin >> end;
//        long long sum = sumnew[end] - sumnew[begin - 1];
//
//        long long num = sum % 9;
//        cout << num << '\n';
//    }
//
//    return 0;
//}
