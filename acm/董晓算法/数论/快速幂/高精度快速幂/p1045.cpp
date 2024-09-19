//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-29.
//


#include<bits/stdc++.h>

using namespace std;

const int N=500;
typedef vector<int> VI;
VI a(N),res(N);
int p;

VI mul(VI &a, VI &b){//高精度
    VI t(N*2);
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++){
            t[i+j] += a[i]*b[j];
            t[i+j+1] += t[i+j]/10;
            t[i+j] %= 10;
        }
    return t;
}
void quickpow(int p){//快速幂
    res[0]=1, a[0]=2;
    while(p){
        if(p & 1) res = mul(res,a);
        a = mul(a,a);
        p >>= 1;
    }
    res[0]--; //个位修正
}

void sol() {
    int p;
    cin >> p;
    cout << int(p * log10(2) + 1) << '\n';
    quickpow(p);
    for (int i = 499; i >= 0; i--) {

        cout << res[i];
        if (i % 50 == 0) {
            cout << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}