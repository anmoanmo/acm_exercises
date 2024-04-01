"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/31 20:21
@IDE:PyCharm
=============================
"""
import datetime

s = datetime.datetime(1900, 1, 1)
e = datetime.datetime(9999, 12, 31)

f = datetime.timedelta(days=1)
ans = 0
while s < e:
    y = str(s.year)
    m = s.month
    d = s.day
    a = sum(int(i) for i in y)
    if a == (m//10 + m%10 + d//10 + d%10):
       ans +=1
    s += f

print(ans)