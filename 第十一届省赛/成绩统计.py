"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/19 15:36
@IDE:PyCharm
=============================
"""

n = int(input())
scores = [int(input()) for _ in range(n)]

a = round(100 * len([score for score in scores if 85 <= score <= 100]) / n)
b = round(100 * len([score for score in scores if 60 <= score <= 100]) / n)
print(b, end='%\n')
print(a, end='%')