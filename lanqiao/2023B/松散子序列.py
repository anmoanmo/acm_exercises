"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/7 17:30
@IDE:PyCharm
=============================
"""

s = input()
d = {chr(96+i): i for i in range(1, 27)}

length = len(s)

if length == 0:
    print(0)
elif length == 1:
    print(d[s])

elif length > 1:
    dp = [0] * (length + 1)
    dp[1] = d[s[0]]

    for i in range(2, length + 1):
        dp[i] = max(dp[i - 1], dp[i - 2] + d[s[i - 1]])

    print(dp[length])