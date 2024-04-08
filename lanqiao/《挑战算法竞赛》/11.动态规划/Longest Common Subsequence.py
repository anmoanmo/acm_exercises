"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/26 17:08
@IDE:PyCharm
=============================
"""

def lcs(x,y):
    a, b = len(x), len(y)
    maxl = 0
    x = ' ' + x
    y = ' ' + y
    l = [[0] * 1010 for _ in range(1010)]

    for i in range(1, a + 1):
        for j in range(1, b + 1):
            if x[i] == y[j]:
                l[i][j] = l[i - 1][j - 1] + 1
            else:
                l[i][j] = max(l[i - 1][j], l[i][j - 1])
            maxl = max(maxl, l[i][j])
    return maxl


q = int(input())
for _ in range(q):
    x = input()
    y = input()
    print(lcs(x, y))




