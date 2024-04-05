"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/1 19:36
@IDE:PyCharm
=============================
"""
#
# n = int(input())
# l = list(map(int, input().split()))
# l.sort()
#
# ans = l[0]
# t = ans + 1
# count = 0
# while True:
#     for i in l:
#         if i == ans:
#             count += 1
#     if count % t == 0:
#         count //= t
#         t += 1
#         ans += 1
#     else:
#         break
#
# print(ans)

n = int(input())
data = list(map(int, input().split()))
data.sort()

from collections import defaultdict
d = defaultdict(int)

for i in data:
    d[i] += 1


ans = data[0]
f = 0

while True:
  if d[ans]%(ans+1) == 0:
    d[ans+1] += d[ans]//(ans+1)
    ans += 1
  else:
    break

print(ans)

