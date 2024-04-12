"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/12 2:35
@IDE:PyCharm
=============================
"""

a, b = map(int, input().split())
l = []
ans = 0
for i in range(0,a):
    for j in range(0,b):
        for k in range(0,a):
            for z in range(0,b):
                if [i-k,z-j,i*j-k*z] not in l:
                    l.append([i-k,z-j,i])
                    ans+=1

print(ans)

