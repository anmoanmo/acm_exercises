"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/9 21:08
@IDE:PyCharm
=============================
"""
import bisect
n=int(input())
a=[int(i) for i in input().split()]
b=[a[0]]
for i in range(1,n):
  target=bisect.bisect_left(b,a[i])
  if target==len(b):
    b.append(a[i])
  else:
    b[target]=a[i]
print(len(b))