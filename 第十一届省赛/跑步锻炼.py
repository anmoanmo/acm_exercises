"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/12 13:03
@IDE:PyCharm
=============================
"""

ans = 0
d = 6
for year in range(2000,2021):
    if year%4==0 and year%100 != 0 or year%400==0 :
        month_lengths = [31,29,31,30,31,30,31,31,30,31,30,31]
    else:
        month_lengths = [31,28,31,30,31,30,31,31,30,31,30,31]
    if year == 2020:
        month_lengths = month_lengths[:9]

    for month_length in month_lengths:
        for day in range(1,month_length+1):
            if day == 1 or d== 1:
                ans +=1
            ans += 1
            d =(d % 7) + 1
print(d)
print(ans + 2 )



