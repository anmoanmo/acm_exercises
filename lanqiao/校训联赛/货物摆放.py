"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/28 12:05
@IDE:PyCharm
=============================
"""
n = 2021041820210418
factor = set()
for i in range(1, int(n**0.5)+1):
    if n % i == 0:
        factor.add(i)
        factor.add(n//i)

count = 0
for i in factor:
    for j in factor:
        for k in factor:
            if i*j*k == n:
                count += 1

print(count)



