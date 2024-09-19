//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-18.
//


#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 200005;
int f[maxn], sum[maxn];
int find(int x){
    if (x == f[x])	return f[x];
    int k = find(f[x]);
    sum[x] += sum[f[x]];//进行和的更新
    return f[x] = k;
}
void init(int n){
    for (int i = 0; i <= n; ++i){
        f[i] = i;
        sum[i] = 0;
    }
}
void solve(){
    int n, m;
    while(~scanf("%d%d", &n, &m)){
        init(n);
        int l, r, w, ans = 0;
        while (m--){
            scanf("%d%d%d", &l, &r, &w);
            l--;//根据区间合并原理，左端点需-1.
            int sl = find(l);
            int sr = find(r);

            printf("%d\n", sl);
            printf("%d\n", sr);

            if (sl == sr && sum[r] - sum[l] != w){
                ans++;
            }
                //进行合并时，认最左端点为父亲。
            else if (sl > sr){
                f[sl] = sr;
                sum[sl] = sum[r] - sum[l] - w;
                printf("%d\n", sum[sl]);
            }
            else if (sl < sr){
                f[sr] = sl;
                sum[sr] = sum[l] - sum[r] + w;
                printf("%d\n", sum[sr]);
            }
            printf("--------------------------------\n");
        }
        printf("%d\n", ans);
    }
}
int main(){
    solve();
    return 0;
}
