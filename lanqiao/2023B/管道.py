"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/7 18:34
@IDE:PyCharm
=============================
"""

n, length = map(int, input().split())
a = []
for i in range(n):
    l,s = map(int, input().split())
    a.append([l, s])

def check(time):
    ran = []
    for l, s in a:
        if time>=s:
            ran.append([max(1, l - (time - s)), min(length, l + (time - s))])
    if ran:
        sorted_ran = sorted(ran, key=lambda x: x[0])
        start, end = sorted_ran[0][0], sorted_ran[0][1]
        if start != 1:
            return False

        for left, right in sorted_ran[1:]:
            if end < left-1:
                return False
            else:
                end = max(end, right)

        if end == length:
            return True
        else:
            return False

    else:
        return False

def sol():
    l, r = 1, 10**9
    ans = 0
    while l <= r:
        mid = (l+r)//2
        if check(mid):
            ans = mid
            r = mid - 1
        else:
            l = mid + 1
    print(ans)

sol()


