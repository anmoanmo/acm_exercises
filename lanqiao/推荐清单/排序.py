"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/8 16:28
@IDE:PyCharm
=============================
"""

n = int(input())
a = list(map(int, input().split()))
a.sort()
for i in range(n):
    print(a[i], end=' ')
a.sort()

for i in range(n):
    print(a[i], end=' ')