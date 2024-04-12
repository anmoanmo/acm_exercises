"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/11 21:47
@IDE:PyCharm
=============================
"""
from collections import defaultdict

n = int(input())
l1 = list(map(int, input().split()))
d1 = [0]*(n+1)
d1[1] = l1[0]
for i in range(2, n+1):
    d1[i] = d1[i-1] + l1[i-1]

l1.sort()
m = int(input())
dic = defaultdict(int)
a1 = 0
f = []
for i in range(1, m+1):
    l, r = map(int, input().split())
    f.append([l, r])
    a1 += d1[r] - d1[l-1]
    for j in range(l,r+1):
       dic[j] += 1
dic = sorted(dic.items(), key=lambda x:x[1],reverse=True)

l2 = [0]*n
index = n-1
for key, value in dic:
    l2[key-1] = l1[index]
    index -= 1

d2 = [0]*(n+1)
d2[1] = l2[0]
for i in range(2, n+1):
    d2[i] = d2[i-1] + l2[i-1]
a2 = 0
for i in range(len(f)):
    a2 += d2[f[i][1]] - d2[f[i][0] - 1]

print(a2-a1)

