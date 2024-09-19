//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-20.
//


#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int N=1005;
int n,a[N][N],f[N][N];

int dfs(int x,int y){
    if(f[x][y]!=-1) return f[x][y];   //记忆化搜索
    if(x==n) return f[x][y]=a[x][y];  //边界
    return f[x][y]=max(dfs(x+1,y),dfs(x+1,y+1))+a[x][y];
}
int main(){
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        for(int j=1; j<=i; j++)scanf("%d",&a[i][j]);

    memset(f,-1,sizeof f);
    dfs(1,1);
    printf("%d\n",f[1][1]);
}