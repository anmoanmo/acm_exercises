"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/31 21:43
@IDE:PyCharm
=============================
"""
def win(a, b, c):
    count = 0
    l = [0]*len(a)
    for i in range(len(a)):
        l[i] = a[i] - b[i] - c[i]
    l.sort(reverse=True)

    f = 0
    for i in l:
        f += i
        if f <= 0 :
            break
        count += 1
    return count

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = list(map(int, input().split()))

result = max(win(a, b, c),win(b, c, a), win(c, b, a))
if result == 0:
    print(-1)
else:
    print(result)