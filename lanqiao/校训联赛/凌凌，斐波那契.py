"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/28 18:08
@IDE:PyCharm
=============================
"""
#
dp = [0] * 110
dp[1], dp[2], dp[3] = 1, 1, 1
def sol(n):
    if dp[n]:
        return dp[n]
    else:
        dp[n] = (sol(n - 1)*1 + sol(n - 2)*2 + sol(n - 3)*3)%(10**9 + 7)
    return dp[n]

if __name__ == '__main__':
    print(sol(100)%(10**9+7))


