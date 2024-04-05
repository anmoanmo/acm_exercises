"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/2 14:48
@IDE:PyCharm
=============================
"""

t = int(input())

for _ in range(t):
    n, m, k = map(int,input().split())
    l, r = k, k
    res = 1
    ans = 1
    while r*m+1 <= n:
        res *= m
        l = l * m - m + 2
        r = r * m + 1
        ans += res
    l = l*m-m+2
    ans +=max(0, n-l+1)
    print(ans)

