"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/28 12:57
@IDE:PyCharm
=============================
"""
import math
t = int(input())

for i in range(t):
    x,y = map(int,input().split())
    if x == y == 0:
        print(0)
    else:
        if math.gcd(x,y)==1:
            print(1)
        else:
            print(2)