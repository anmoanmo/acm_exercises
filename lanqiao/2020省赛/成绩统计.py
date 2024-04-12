"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/12 19:59
@IDE:PyCharm
=============================
"""

import decimal

n = int(input())
a = 0
b = 0
for i in range(n):
    x = int(input())
    if x>=60:
        a += 1
    if x>= 85:
        b += 1
print(str(round(a*100/n)) + '%')
print(str(round(b*100/n)) + '%')
