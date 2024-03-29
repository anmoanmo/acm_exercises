"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/28 12:27
@IDE:PyCharm
=============================
"""

n, m = map(int, input().split())

for i in range(m):
    l = list(map(int, input().split()))
    for j in range(0, n*3, 3):
        if sum(int(x) for x in l[j:j+3]) <= 90:
            print(1,end='')
        else:
            print(0,end='')
    print()
