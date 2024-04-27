"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/27 19:19
@IDE:PyCharm
=============================
"""
import math

n = int(input())
ans = 0
f  = []
ff = []
def factor(x):
    if x in ff:
        return False
    if x in f:
        return True
    for i in range(2,int(math.sqrt(x))+1):
        if x%i==0:
            ff.append(x)
            return False
    f.append(x)
    return True

for i in range(1,n+1):
    x = int(input())
    if factor(x):
        ans += 1
print(ans)