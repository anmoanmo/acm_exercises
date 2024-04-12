"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/11 18:15
@IDE:PyCharm
=============================
"""

n, m, k, t = map(int, input().split())
ti = list(map(int, input().split()))
di = {i: ti[i-1] for i in range(1, n)}

