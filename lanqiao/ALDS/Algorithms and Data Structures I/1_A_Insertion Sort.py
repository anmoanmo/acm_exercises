"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/23 19:58
@IDE:PyCharm
=============================
"""
n = int(input())
a = list(map(int, input().split()))
print(' '.join(map(str, a)))
for i in range(1,len(a)):
    key = a[i]
    j = i-1
    while j >= 0 and a[j] > key:
        a[j+1] = a[j]
        j -= 1
    a[j+1] = key
    print(' '.join(map(str, a)))