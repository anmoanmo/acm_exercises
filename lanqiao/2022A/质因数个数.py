"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/11 21:08
@IDE:PyCharm
=============================
"""
n = int(input())
ans = 0
i = 2
while i**2 <= n:
    if n % i == 0:
        ans += 1
        while n % i == 0:
            n //= i
    i +=1
if n>1:
    ans +=1
print(ans)