"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/26 14:45
@IDE:PyCharm
=============================
"""
import datetime

d = datetime.date(2000, 1, 1)
de = datetime.timedelta(days=1)
d1 = datetime.date(2024,12,12)
s = str(d+de).replace('-', '')
print(d.isoweekday())
print(d1.isoweekday())
print(d1.isoformat())
print((d1-d).days)