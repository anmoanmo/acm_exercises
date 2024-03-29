"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/28 18:47
@IDE:PyCharm
=============================
"""
taday = 2
ans = 0
for year in range(2025, 2277):
    if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
        m = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    else:
        m = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

    for month in m:
        for day in range(1, month+1):
            if day == 16 and taday == 6:
                ans += 1
            taday += 1
            taday %= 7

print(ans)
