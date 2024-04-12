"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/12 10:51
@IDE:PyCharm
=============================
"""
from collections import deque
from itertools import islice

prime = deque()
vis = [True] * 10**8
def euler_sieve(n):
    cnt = 0
    for i in range(2, n+1):
        if vis[i]:
            prime.append(i)
            cnt += 1
        for j in range(cnt):
            if i*prime[j] > n:
                break
            vis[i*prime[j]] = False
            if i % prime[j] == 0:
                break
    return cnt

if __name__ == '__main__':
    euler_sieve(10**7)
    first_1000_primes = list(islice(prime, 1000))  # 使用islice来获取前1000个素数
    print(first_1000_primes)