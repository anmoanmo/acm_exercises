//��ϣ����ѧ�ұϴ����˹����Ȼ���о��з��֣�
// 220��������Լ��(������������Լ��)֮��Ϊ��
//1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110��284��
//��284��������Լ��Ϊ1��2��4��71�� 142��������ǡ��Ϊ220��
// ���Ƕ����������е��ܾ��棬����֮Ϊ�׺�����
// һ��ؽ���������������κ�һ����������һ��������Լ��֮�ͣ�
// ���������������׺�����
//�������ͱ�дһ�������жϸ������������Ƿ����׺���
//�������ݵ�һ�а���һ����M��������M�У�ÿ��һ��ʵ��,������������A,B�� 
// ���� 0 <= A,B <= 600000 ;
//����ÿ������ʵ�������A��B���׺����Ļ����YES���������NO��
//#include<iostream>
//using namespace std;
//
//// ����һ������������Լ��֮��
//int sum(int num) {
//    int sum = 1; 
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) {
//            sum += i;
//            if (i != num / i) {
//                sum += num / i;
//            }
//        }
//    }
//    return sum;
//}
//
//int main() {
//    int M;
//    cin >> M;
//
//    for (int i = 0; i < M; i++) {
//        int A, B;
//        cin >> A >> B;
//
//        int sumA = sum(A);
//        int sumB = sum(B);
//
//        if (sumA == B && sumB == A) {
//            cout << "YES" << endl;
//        }
//        else {
//            cout << "NO" << endl;
//        }
//    }
//
//    return 0;
//}