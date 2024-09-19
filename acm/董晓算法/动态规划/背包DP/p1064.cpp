//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-14.
//

#include<iostream>

using namespace std;

const int N = 33000;
int n, W, v, p, q;
int mw[N], mv[N], fw[N][3], fv[N][3];
int f[N];

int main() {
    cin >> W >> n;      //W总重量，n总个数
    for (int i = 1; i <= n; i++) {
        cin >> v >> p >> q;
        if (!q) {
            mw[i] = v;    //主件重量
            mv[i] = v * p;  //主件价值
        } else {
            fw[q][0]++;           //附件个数
            fw[q][fw[q][0]] = v;    //fw附件重量
            fv[q][fw[q][0]] = v * p;  //fv附件价值
        }
    }

    for (int i = 1; i <= n; i++)                 //物品
        for (int j = W; j >= mw[i]; j--) {          //体积
            f[j] = max(f[j], f[j - mw[i]] + mv[i]);  //只选m
            if (j >= mw[i] + fw[i][1])             //选m,a
                f[j] = max(f[j], f[j - mw[i] - fw[i][1]] + mv[i] + fv[i][1]);
            if (j >= mw[i] + fw[i][2])             //选m,b
                f[j] = max(f[j], f[j - mw[i] - fw[i][2]] + mv[i] + fv[i][2]);
            if (j >= mw[i] + fw[i][1] + fw[i][2])    //选m,a,b
                f[j] = max(f[j], f[j - mw[i] - fw[i][1] - fw[i][2]] + mv[i] + fv[i][1] + fv[i][2]);
        }
    cout << f[W];
}
