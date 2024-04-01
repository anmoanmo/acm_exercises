"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/31 20:39
@IDE:PyCharm
=============================
"""

n, x = map(int, input().split())
s = sorted(input())
if s[0] != s[x-1]:
    print(s[x-1])
if s[0] == s[-1]:
    print(''.join(s[::x]))
else:
    print(''.join(s[x-1:]))