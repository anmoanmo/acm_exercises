//��������һ�仰:"��������Ʈ�������ܲ���������"��
// ��ʵҪ���ܰ������ĵ�������ʵҲ���ѣ�ѧ�㰲ȫ֪ʶ�Ϳ��ԡ�
//���ȣ����Ǿ�Ҫ����һ����ȫ�����롣
// ��ʲô��������Žа�ȫ���أ�
// һ����˵һ���Ƚϰ�ȫ����������Ӧ��������������������
//(1).���볤�ȴ��ڵ���8���Ҳ�Ҫ����16��
//(2).�����е��ַ�Ӧ���������桰�ַ�����������е��������顣
//���ĸ��ַ����ֱ�Ϊ��
//1.��д��ĸ��A, B, C...Z;
//2.Сд��ĸ��a, b, c...z;
//3.���֣�0, 1, 2...9;
//4.������ţ�~, !, @, #, $, %, ^;
//
//����һ�����룬�����������ж����ǲ���һ����ȫ�����롣
//�������ݵ�һ�а���һ����M��������M�У�
//ÿ��һ�����루����������Ϊ50�����������������������ַ���
//����ÿ������ʵ�����ж���������ǲ���һ����ȫ�����룬
//�ǵĻ����YES���������NO��
//#include<iostream>
//#include<string>
//using namespace std;
//
//// ���һ���ַ��Ƿ�Ϊ��д��ĸ
//bool isUpperCase(char c) {
//    return (c >= 'A' && c <= 'Z');
//}
//
//// ���һ���ַ��Ƿ�ΪСд��ĸ
//bool isLowerCase(char c) {
//    return (c >= 'a' && c <= 'z');
//}
//
//// ���һ���ַ��Ƿ�Ϊ����
//bool isDigit(char c) {
//    return (c >= '0' && c <= '9');
//}
//
//// ���һ���ַ��Ƿ�Ϊ�������
//bool isSpecialChar(char c) {
//    string specialChars = "~!@#$%^";
//    return (specialChars.find(c) != string::npos);
//}
//
//// ����һ������������λ������
//int count(int num) {
//    int count = 0;
//    while (num) {
//        count += num & 1;
//        num >>= 1;
//    }
//    return count;
//}
//
//// ���һ�������Ƿ�ȫ
//bool isSecurePassword(string password) {
//    if (password.length() < 8 || password.length() > 16) {
//        return false;
//    }
//
//    int flag = 0; // ��¼�ַ���������
//
//    for (char c : password) {
//        if (isUpperCase(c)) {
//            flag |= 1 << 0; // ���õ�1λ��ʾ��д��ĸ
//        }
//        else if (isLowerCase(c)) {
//            flag |= 1 << 1; // ���õ�2λ��ʾСд��ĸ
//        }
//        else if (isDigit(c)) {
//            flag |= 1 << 2; // ���õ�3λ��ʾ����
//        }
//        else if (isSpecialChar(c)) {
//            flag |= 1 << 3; // ���õ�4λ��ʾ�������
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
