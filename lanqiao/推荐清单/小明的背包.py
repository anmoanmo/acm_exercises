"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/8 19:29
@IDE:PyCharm
=============================
"""
# # 滚动数组
# n, v = map(int, input().split())
# dp = [[0]*(v + 1) for i in range(2)]
#
# for i in range(1, n+1):
#     weight, value = map(int, input().split())
#     for j in range(1, v+1):
#         if weight > j:
#             dp[1][j] = dp[0][j]
#         else:
#             dp[1][j] = max(dp[0][j], dp[0][j - weight] + value)
#     dp[0], dp[1] = dp[1], dp[0]
# print(dp[0][v])

# 常规dp
# 滚动数组
# n, v = map(int, input().split())
# dp = [[0]*(v + 1) for i in range(n + 1)]
#
# for i in range(1, n+1):
#     weight, value = map(int, input().split())
#     for j in range(1, v+1):
#         if weight > j:
#             dp[i][j] = dp[i-1][j]
#         else:
#             dp[i][j] = max(dp[i-1][j], dp[i-1][j - weight] + value)
# print(dp[n][v])

# 自我滚动
n, v = map(int, input().split())
dp = [0]*(v + 1)
for i in range(1, n+1):
    weight, value = map(int, input().split())
    for j in range(v, weight-1, -1):
        # 从后往前遍历避免重复调用空间，从而产生一个位置放置多次的错误
        dp[j] = max(dp[j], dp[j-weight] + value)

print(dp[v])