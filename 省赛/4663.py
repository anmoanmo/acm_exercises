"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/7 11:48
@IDE:PyCharm
=============================
"""

import sys;
readline = sys.stdin.readline
read = lambda: [int(x) for x in readline().split()]

N, K = read()
arr = [0] + read()

i = 1
ans = 0
while i <= N:
    if i + K - 1 <= N:
        minv = min(arr[i:i+K])
        if minv != 0:
            ans += minv
            for t in range(i, i+K): arr[t] -= minv
        for t in range(i, i+K): # 关键优化
            if arr[t] == 0: i = t
    i += 1
ans += sum(arr)
print(ans)
