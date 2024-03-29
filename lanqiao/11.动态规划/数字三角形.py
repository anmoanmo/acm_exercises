"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/27 15:08
@IDE:PyCharm
=============================
"""

def sol():
    r = int(input())
    dp = [[0] * 110 for _ in range(110)]
    tri = [[0] * (r + 1) for _ in range(r+1)]

    for i in range(1, r+1):
        l = list(map(int, input().split()))
        for j in range(1, i+1):
            tri[i][j] = l[j-1]

    for i in range(r, 0, -1):
        for j in range(1, i+1):
            dp[i][j] += max(dp[i+1][j], dp[i+1][j+1]) + tri[i][j]

    print(dp[1][1])

if __name__ == '__main__':
    sol()
