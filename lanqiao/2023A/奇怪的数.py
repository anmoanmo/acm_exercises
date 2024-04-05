"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/2 13:51
@IDE:PyCharm
=============================
"""

# def sol(a, b=5):
#     x = 1
#     y = 1
#     for i in range(b, b-a,-1):
#         x *= i
#     for i in range(1,a+1):
#         y *= i
#     return x//y
#
# n, m = map(int, input().split())
#
# num_1 = 3
# max1 = 43
# ans = 1
# for i in range(0, n-m+1):
#     num_1 += (-1) ** (i + 1)
#     max1 += (-1) ** (i + 1)
#     num_2 = (m - num_1) // 2
#     if m >= max1:
#         ans +=


dp = [[[[[0] for _ in range(10)] for _ in range(10)] for _ in range(10)] for _ in range()]
