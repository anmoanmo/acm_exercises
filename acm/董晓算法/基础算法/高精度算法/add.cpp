//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-29.
//


#include <iostream>
using namespace std;

const int N=505;
int a[N],b[N],c[N];
int la,lb,lc;

void add_op(int a[],int b[],int c[]){ //a+b=c
    for(int i=1; i<=lc; i++){
        c[i]+=a[i]+b[i]; //求和
        c[i+1]+=c[i]/10; //进位
        c[i]%=10;        //存余
    }
    if(c[lc+1]) lc++;  //最高位
}

void add_init(string sa, string sb){
    la=sa.size(),lb=sb.size(),lc=max(la,lb);
    for(int i=1; i<=la; i++) a[i]=sa[la-i]-'0';
    for(int i=1; i<=lb; i++) b[i]=sb[lb-i]-'0';
    add_op(a,b,c);
}

int main(){
    string sa,sb; cin>>sa>>sb;
    add_init(sa,sb);
    for(int i=lc; i; i--){
        cout<<c[i];
    };
    return 0;
}