"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/1 19:36
@IDE:PyCharm
=============================
"""
a = [1]
for i in range(2, 10**4+10):
    a.append(a[-1]*i)

n = int(input())
A = list(map(int, input().split()))
A.sort()
max1 = 0
sum1 = 0
for i in A:
    sum1 += a[i-1]
    print("awa" +str(a[2]))

    if a[i-1] > max1:
        max1 = a[i-1]
    if sum1 in a and sum1 > max1:
        max1 = sum1

print(a.index(max1) + 1)