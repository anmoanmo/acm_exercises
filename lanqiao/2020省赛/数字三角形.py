"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/12 20:29
@IDE:PyCharm
=============================
"""

n = int(input())
nums = []

for i in range(n):
    row = list(map(int, input().split(' ')))
    if i > n // 2:
        row = row[i - n // 2:-(i - n // 2)]
    nums.append(row)

dp = [[0 for _ in range(n + 1)] for _ in range(n + 1)]

for i in range(1, n+1):
    for j in range(1, n+1):
        if j > len(nums[i-1]):
            break

        dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + nums[i-1][j-1]

print(max(dp[-1]))