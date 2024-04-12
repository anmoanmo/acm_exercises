"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/11 22:18
@IDE:PyCharm
=============================
"""

t = int(input())
def check4(a, b, c):
    for i in a:
        for j in b:
            for k in c:
                if i == j == k:
                    return True
                if i == j and a[0] + a[1] + b[0] + b[1] - i - j == k:
                    return True
                if i == k and a[0] + a[1] + c[0] + c[1] - i - k == j:
                    return True
                if k == j and b[0] + b[1] + c[0] + c[1] - k - j == i:
                    return True

def check6(a, b, c):
    for i in a:
        for j in b:
            for k in c:
                if i == j or i == k or j == k:
                    return True
                if i == j + k or j == i + k or k == i + j:
                    return True

for i in range(t):
    a1, b1, a2, b2, a3, b3 = map(int, input().split())
    a = sorted([a1, b1])
    b = sorted([a2, b2])
    c = sorted([a3, b3])
    if check4(a, b, c):
        print(4)
        continue
    if check6(a, b, c):
        print(6)
        continue
    else:
        print(8)
        continue






