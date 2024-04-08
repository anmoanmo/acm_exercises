"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/7 17:13
@IDE:PyCharm
=============================
"""
ans = [0]*4048
for i in range(1,2024):
    for j in range(i+1,2024):
        ans[i + j] += i
print(max(ans))