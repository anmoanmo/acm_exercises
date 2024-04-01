"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/1 17:33
@IDE:PyCharm
=============================
"""

n,m,a,b = map(int,input().split())
x = [[0]*m for _ in range(n)]

for i in range(n):
    l = list(map(int,input().split()))
    for j in range(len(l)):
        x[i][j] = l[j]

ans = 0

for i in range(n-a+1):
    for j in range(m-b+1):
        min_v = max_v = x[i][j]
        for k in range(i,i+a):
            for l in range(j,j+b):
                if min_v > x[k][l]:
                    min_v = x[k][l]
                if max_v < x[k][l]:
                    max_v = x[k][l]
        ans += max_v * min_v

print(ans%998244353)
