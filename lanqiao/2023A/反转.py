"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/1 16:42
@IDE:PyCharm
=============================
"""

def v(a, b):
    c = 0
    for i in range(1, len(a)-1):
        if a[i] == b[i]:
            continue
        elif a[i] != a[i+1] and a[i] != a[i-1]:
            c += 1
            a[i] = b[i]
        elif b[i] != b[i+1] and b[i] != b[i-1]:
            c += 1
            b[i] = a[i]
    if a != b:
        return -1
    else:
        return c

d = int(input())

for _ in range(d):
    a = list(input())
    b = list(input())
    print(v(a, b))



