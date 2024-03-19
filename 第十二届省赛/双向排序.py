"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/19 19:03
@IDE:PyCharm
=============================
"""
n, m = map(int, input().split(' '))
l = [int(_) for _ in range(1, n+1)]

for i in range(m):
    n1, m1 = map(int, input().split(' '))
    if n1 == 0:
        l[:m1] = sorted(l[:m1], reverse=True)
    else:
        l[m1-1:] = sorted(l[m1-1:])

for i in l:
    print(i,end=' ')



