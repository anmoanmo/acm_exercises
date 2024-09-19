#include<cstdio>
using namespace std;
typedef long long ll;
const int maxn = 100005;
ll n, k, cnt, a[maxn], b[maxn];
void Mergesort(ll l, ll r) {//归并排序
    if (l >= r)return;
    ll mid = (l + r) / 2;//分成两个子序列
    Mergesort(l, mid);
    Mergesort(mid + 1, r);
    //合并
    ll idx = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r) {
        if (a[i] > a[j]) {
            b[idx++] = a[j++];
            cnt += mid - i + 1;//记录逆序对
        }
        else b[idx++] = a[i++];
    }
    while (i <= mid)b[idx++] = a[i++];
    while (j <= r)b[idx++] = a[j++];
    for (i = 0; i < idx; i++)a[i + l] = b[i];//写回原数组
}
int main() {
    while (~scanf("%lld%lld", &n, &k)) {
        cnt = 0;
        for (ll i = 0; i < n; i++)scanf("%lld", &a[i]);
        Mergesort(0, n - 1);
        if (cnt <= k)printf("0\n");
        else printf("%lld\n", cnt - k);
    }
    return 0;
}
