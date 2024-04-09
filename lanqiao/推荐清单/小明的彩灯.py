"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/9 14:48
@IDE:PyCharm
=============================
"""


n, q = map(int, input().split())
light = list(map(int, input().split()))
d = [0] * (n+1)
for i in range(q):
    l, r, x = map(int, input().split())
    d[l-1] += x
    d[r] -= x

for i in range(1, n):
    d[i] += d[i-1]

for i in range(n):
    print(max(d[i]+light[i], 0), end=' ')



