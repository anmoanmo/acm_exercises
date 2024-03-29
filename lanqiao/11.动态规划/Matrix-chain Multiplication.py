"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/26 21:00
@IDE:PyCharm
=============================
"""

def sol():
    n = int(input())
    m = [[0]*110 for i in range(110)]
    p = [0]*110


    for _ in range(n):
        m[_][0], m[_][1] = map(int, input().split())



