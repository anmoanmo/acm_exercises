"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/7 21:03
@IDE:PyCharm
=============================
"""
s = input()
count = 0
i = 0
while i < len(s)-1:
    if s[i] == s[i+1] or s[i] == '?' or s[i+1] == '?' :
        count += 1
        i += 2
        continue
    i += 1
print(count)