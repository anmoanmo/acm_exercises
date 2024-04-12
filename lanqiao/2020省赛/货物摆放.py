"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/12 2:59
@IDE:PyCharm
=============================
"""
from collections import deque

n = 2021041820210418
q = deque()

for i in range(1,int(n**0.5)+1):
    if n%i==0:
        q.append(i)
    if n%(n//i)==0:
        q.append(n//i)
ans = 0
for i in q:
    for j in q:
        for k in q:
            if i*j*k == n:
                ans+=1

print(ans)