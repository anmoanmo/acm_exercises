"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/28 13:23
@IDE:PyCharm
=============================
"""
def sieve_of_eratosthenes(limit):
    primes = [True] * (limit + 1)
    primes[0] = primes[1] = False
    for i in range(2, int(limit ** 0.5) + 1):
        if primes[i]:
            for j in range(i * i, limit + 1, i):
                primes[j] = False
    return [i for i in range(2, limit + 1) if primes[i]]

n = 111112  # 设置范围的上限
z = sieve_of_eratosthenes(n)
count = 0
for i in range(1111, 111112):
    if i in z and i % 10 != 1:
        count += 1

print(count)
