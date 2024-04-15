"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/15 16:52
@IDE:PyCharm
=============================
"""
from a34 import Solution

sol = Solution()
s = input().strip('[]')
nums = list(map(int, s.split(',')))
target = int(input())

print(sol.searchRange(nums, target))

