"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/7 16:58
@IDE:PyCharm
=============================
"""
count = 0
for i in range(12345678,98765433):
    i = str(i)
    count += 1
    if '2' in i:
        a = i.index('2')
        if '0' in i[a:]:
            b = i.index('0', a)
            if '2' in i[b:]:
                c = i.index('2', b)
                if '3' in i[c:]:
                    count -= 1

print(count)