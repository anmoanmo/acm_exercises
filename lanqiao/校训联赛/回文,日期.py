"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/28 19:39
@IDE:PyCharm
=============================
"""

import datetime

a = input()
x = int(a[:4])
y = int(a[4:6])
z = int(a[6:])
dd = datetime.date(x, y, z)
ans = 0

for n in range(9999999):
    dd = dd + datetime.timedelta(days=1)
    sd = str(dd).replace('-', '')
    if sd[:] == sd[::-1]:
        print(ans)
        break
    ans += 1
