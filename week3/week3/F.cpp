//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int n = 0, m = 0;
//	while (cin >> n >> m&&(n!=0&m!=0) ) {
//		int result = 1;
//		for (int j = 0; j < m; j++) {
//			result *= n;
//			result %= 1000;
//		}
//		cout << result << endl;
//		}
//	return 0;
//}
//#include<iostream>
//#include<cmath> // ���� math ���е� pow ����
//
//using namespace std;
//
//int main() {
//    int n = 0, m = 0;
//    while (cin >> n >> m && (n != 0 || m != 0)) { 
//        int result = pow(n, m); // ʹ�� pow �������� n �� m �η�
//        cout << (result % 1000) << endl;
//    }
//    return 0;
//}
//#include<iostreAm>
//using namespace std;
//int main()
//{
//     int A,B;
//     while(cin>>A>>B)
//    {
//         if(A==0&&B==0) return 0;
//         int ans=1;
//         for(int i=0;i<B;i++)
//        {
//             ans=ans*A;
//             ans=ans%1000;
//        }
//        cout<<ans<<endl;
//    }
//    return 0;
//}