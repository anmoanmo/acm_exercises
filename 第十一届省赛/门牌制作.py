"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/12 12:10
@IDE:PyCharm
=============================
"""

ans = 0
for i in range(1,2021):
    ans += str(i).count('2')
print(ans)