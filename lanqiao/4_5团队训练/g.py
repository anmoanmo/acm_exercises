"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/5 13:20
@IDE:PyCharm
=============================
"""

import math
def sol(l, r, k):
    count = 0

    for i in range(l, r+1):
        if math.gcd((i * k) ^ k, k) == 1:
            count += 1
    return count

def main():
    x, n = map(int, input().split())
    for _ in range(n):
        l, r = map(int, input().split())
        print(sol(l,r,x))

if __name__ == '__main__':
    main()
