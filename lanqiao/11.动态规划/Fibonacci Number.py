"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/26 16:41
@IDE:PyCharm
=============================
"""

dp = [0] * 500
dp[0] = 1
dp[1] = 1

def fibonacci(n):
    if dp[n]:
        return dp[n]
    dp[n] = fibonacci(n - 1) + fibonacci(n - 2)
    return dp[n]

if __name__ == '__main__':
    n = int(input())
    print(fibonacci(n))
