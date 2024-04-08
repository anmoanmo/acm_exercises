"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/7 21:28
@IDE:PyCharm
=============================
"""

# 半对超时
n, m = map(int, input().split())
l = [[-1]*n for i in range(n)]

for _ in range(m):
    x1, y1, x2, y2 = map(int, input().split())
    for i in range(x1-1, x2):
        for j in range(y1-1, y2):
            l[i][j] *= -1

for i in range(n):
    for j in range(n):
        if l[i][j] == -1:
            print('0', end='')
        else:
            print('1', end='')
    print()
