"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/12 20:08
@IDE:PyCharm
=============================
"""
# from collections import defaultdict
# s = input()
# k = defaultdict(int)
# for i in s:
#     k[i] += 1
#
# k = sorted(k.items(), key=lambda x: x[1], reverse=True)
# a, b = k[0]
# print(a)
# print(b)

s = input()
ans1 = 'a'
ans2 = -1
for i in s:
  if s.count(i)>ans2:
    ans2 = s.count(i)
    ans1 = i
print(ans1)
print(ans2)