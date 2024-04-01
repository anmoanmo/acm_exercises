"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/1 19:19
@IDE:PyCharm
=============================
"""

n = int(input())
l = [[] for i in range(10)]

for i in range(n):
    a, b = map(int,input().split())
    l[a].append(b)

f = n//10
ans = 0
for i in range(10):
    l[i].sort()
    ans += sum(l[i][:-f])

print(ans)
