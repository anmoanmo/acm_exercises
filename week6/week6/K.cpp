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
//#define ll long long    // ����llΪlong long�ļ�д
//#define rint register int // ʹ��register�ؼ���Ϊint����һ����д���������ִ��������л������ǹ�ʱ��
//using namespace std;    // ʹ�ñ�׼�����ռ�
//stack<int> zhan;        // ����һ��������ջ����Ϊzhan
//
//int main() {
//    int t;  // ��������������
//    scanf("%d", &t); // �����������������
//    while (t--) {     // ��ÿһ��������������ѭ������
//        int n;    // ���������
//        scanf("%d", &n); // ��������
//        int nowline = 0, pos = 0;  // ��ǰ������λ�ñ���
//        int Fcnt = 0, Ecnt = 0, cnt = 0;  // F��E�������ļ�����
//        int hisans = 0, myans = 0;     // ��ʷ�𰸺��ҵĴ�
//        int runflag = -1;   // ���б�ǣ�Ĭ��Ϊ-1
//        bool endflag = false;   // ������ǣ�Ĭ��Ϊfalse
//        string tmp;   // ��ʱ�ַ��������ڶ����
//        cin >> tmp;
//        string sublist = "0";   // ���б�Ĭ��Ϊ"0"
//
//        // �������ַ�������ȡ���е�����
//        for (rint i = 0; i < tmp.length(); ++i)
//            if (tmp[i] >= '0' && tmp[i] <= '9') {
//                hisans += tmp[i] - '0';
//                hisans *= 10;
//            }
//        hisans /= 10;   // ��ɽ���
//        if (tmp[2] == '1') hisans = 0;  // ������ַ����ĵ������ַ�Ϊ1������ʷ��Ϊ0
//
//        // ��ÿһ��������н���
//        for (rint i = 1; i <= n; ++i) {
//            string sub, opt, tmpsta, tmpend;   // �������ַ�������������ʱ��ʼ����ʱ�����ַ���
//            int sta = 0, end = 0;   // ��ʼ�ͽ�����������ʾ
//            cin >> opt;   // �������
//
//            // �������Ϊ"F"
//            if (opt == "F") {
//                ++Fcnt; ++pos;  // F�ļ�������λ�ñ�����һ
//                zhan.push(pos);  // ��λ��ѹ���ջ
//                cin >> sub >> tmpsta >> tmpend;   // �������ַ�������ʱ�Ŀ�ʼ�ͽ����ַ���
//
//                // ��������ַ�����'n'���ҿ�ʼ�ַ�������'n'���������cnt��һ
//                if (tmpend[0] == 'n' && (!(tmpsta[0] == 'n' && tmpend[0] == 'n'))) ++cnt;
//
//                // ������ʼ�ַ�������ȡ���е�����
//                for (rint j = 0; j < tmpsta.length(); ++j) {
//                    sta += tmpsta[j] - '0';
//                    sta *= 10;
//                }
//                sta /= 10;  // ��ɽ���
//
//                // ��������ַ���������
//                if (tmpend[0] != 'n') {
//                    // ���������ַ�������ȡ���е�����
//                    for (rint i = 0; i < tmpend.length(); ++i) {
//                        end += tmpend[i] - '0';
//                        end *= 10;
//                    }
//                    end /= 10;   // ��ɽ���
//                    // �����ʼ���ִ��ڽ������֣���������б��
//                    if (sta > end) runflag = pos;
//                }
//
//                // �����ҵĴ�
//                if (runflag == -1 || pos < runflag) myans = max(myans, cnt);
//
//                sublist += sub;   // �������б�
//
//                // ������б����Ѿ��������ַ������������������ѭ��
//                if (sublist.find(sub) != sublist.length() - 1) {
//                    printf("ERR\n"); cnt = 0; nowline = i; endflag = true; break;
//                }
//
//                sta = 0; end = 0;    // ���ÿ�ʼ�ͽ�������
//            }
//            // �������Ϊ"E"
//            else if (opt == "E") {
//                --cnt; ++Ecnt;  // E�ļ�������һ�������ļ�������һ
//
//                // �����ջΪ�ղ���δ�������������������ѭ��
//                if (zhan.empty() && !endflag) {
//                    printf("ERR\n"); cnt = 0; nowline = i; endflag = true; break;
//                }
//
//                // �����ջ�Ķ���С�ڻ�������б�ǣ������λ�ú����б��
//                if (zhan.top() <= runflag) {
//                    pos = 0;
//                    runflag = -1;
//                }
//
//                // ������ջ�Ķ���
//                if (!zhan.empty()) zhan.pop();
//
//                // ɾ�����б�����һ���ַ�
//                if (sublist.length() > 0) sublist = sublist.substr(0, sublist.length() - 1);
//
//                // �����ջΪ�գ������������Ϊ0
//                if (zhan.empty()) cnt = 0;
//            }
//        }
//
//        // ����Ѿ�����������ն�ջ���������µ�����
//        if (endflag) {
//            cnt = 0;
//            while (!zhan.empty()) zhan.pop();
//            string cnm;
//            for (rint i = 1; i <= n - nowline + 1; ++i) getline(cin, cnm);
//            continue;
//        }
//
//        // ���F������������E�����������������
//        if (Fcnt != Ecnt) {
//            if (!endflag) printf("ERR\n");
//            while (!zhan.empty()) zhan.pop();
//            cnt = 0;
//            continue;
//        }
//
//        // ��ն�ջ
//        while (!zhan.empty()) zhan.pop();
//
//        // ���û�н����������ҵĴ𰸺���ʷ���ж����
//        if (!endflag) {
//            if (myans == hisans) printf("Yes\n");
//            else printf("No\n");
//        }
//
//        // �����ҵĴ𰸺���ʷ��Ϊ0
//        myans = hisans = 0;
//    }
//    return 0;
//}


