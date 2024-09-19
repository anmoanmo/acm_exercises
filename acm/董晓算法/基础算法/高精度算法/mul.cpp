//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-29.
//


#include <iostream>
using namespace std;

const int N=100005;
int a[N],b[N],c[N];
int la,lb,lc;

void mul(int a[],int b[],int c[]){ //a*b=c
    for(int i=0; i<la; i++)
        for(int j=0; j<lb; j++){
            c[i+j] += a[i]*b[j];   //存乘积
            c[i+j+1] += c[i+j]/10; //存进位
            c[i+j] %= 10;          //存余数
        }
    while(lc && c[lc]==0) lc--; //去前导0
}
int main(){
    string sa,sb;
    cin>>sa>>sb;
    la=sa.size(); lb=sb.size(); lc=la+lb;
    for(int i=la-1; ~i; i--) a[la-1-i]=sa[i]-'0';
    for(int i=lb-1; ~i; i--) b[lb-1-i]=sb[i]-'0';
    mul(a,b,c);
    for(int i=lc; ~i; i--) cout << c[i];
}