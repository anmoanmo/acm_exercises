#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
#define pb push_back
#define fi first
#define se second
#define mem(a,x) memset(a,x,sizeof(a));
#define db double 
#define fir(i,a,n) for(int i=a;i<=n;i++)


const int N = 1e5 + 10;
int h, w, n;
struct node
{
	ll a, b, a1, b1; int i;
}a[N];
bool cmpa(node a, node b)
{
	return a.a < b.a;
}
bool cmpb(node a, node b)
{
	return a.b < b.b;
}
bool cmpi(node a, node b)
{
	return a.i < b.i;
}
int main()
{
	scanf("%lld%lld%d", &h, &w, &n);
	fir(i, 1, n)
	{
		scanf("%lld%lld", &a[i].a, &a[i].b);
		a[i].i = i;
	}

	sort(a + 1, a + 1 + n, cmpa);
	a[1].a1 = 1;
	fir(i, 2, n)
	{
		if (a[i].a == a[i - 1].a) a[i].a1 = a[i - 1].a1;
		else  a[i].a1 = a[i - 1].a1 + 1;
	}

	sort(a + 1, a + 1 + n, cmpb);
	a[1].b1 = 1;
	fir(i, 2, n)
	{
		if (a[i].b != a[i - 1].b) a[i].b1 = a[i - 1].b1 + 1;
		else  a[i].b1 = a[i - 1].b1;
	}

	sort(a + 1, a + 1 + n, cmpi);
	fir(i, 1, n)
	{
		printf("%lld %lld\n", a[i].a1, a[i].b1);
	}
	return 0;
}

