//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-31.
//

//Ford 判负环 740ms#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

const int inf=0x3f3f3f3f;
const int N=2010,M=6010;
int n,m;
int to[M],ne[M],w[M],h[N],tot;
int d[N];

void add(int a,int b,int c){
    to[++tot]=b;w[tot]=c;
    ne[tot]=h[a];h[a]=tot;
}
bool ford(){
    memset(d,inf,sizeof d); d[1]=0;
    bool flag; //是否松弛
    for(int i=1;i<=n;i++){ //跑n轮
        flag=false;
        for(int u=1;u<=n;u++){ //n个点
            if(d[u]==inf)continue;
            for(int j=h[u];j;j=ne[j]){
                int v=to[j];
                if(d[v]>d[u]+w[j]){
                    d[v]=d[u]+w[j];
                    flag=true;
                }
            }
        }
        if(!flag)break;
    }
    return flag; //第n轮=true,有负环
}
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        tot=0; memset(h,0,sizeof(h));
        scanf("%d%d",&n,&m);
        for(int i=1;i<=m;i++){
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            add(u,v,w);
            if(w>=0)add(v,u,w);;
        }
        puts(ford()?"YES":"NO");
    }
    return 0;
}