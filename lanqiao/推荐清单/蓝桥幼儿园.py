"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/9 15:56
@IDE:PyCharm
=============================
"""

n, m = map(int, input().split())
fa = [i for i in range(n+1)]
def find_set(x):
    if x != fa[x]:
        fa[x] = find_set(fa[x])
    return fa[x]


def merge_set(x, y):

    a = find_set(x)
    b = find_set(y)
    if a != b:
        fa[a] = fa[b]

for i in range(m):
    op, x, y = map(int, input().split())
    if op == 2:
        q = find_set(x)
        p = find_set(y)
        if q == p:
            print('YES')
        else:
            print('NO')
    else:
        merge_set(x, y)

