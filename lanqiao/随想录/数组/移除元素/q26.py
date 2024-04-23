"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/23 19:31
@IDE:PyCharm
=============================
"""
# from typing import List
# class Solution:
#     def removeDuplicates(self, nums: List[int]) -> int:
#         l = nums
#         slow = 0
#         for fast in range(1, len(l)):
#             if l[fast] != l[slow]:
#                 slow += 1
#                 l[slow] = l[fast]
#         return slow + 1

from typing import List
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        ans = []
        for i in nums:
            if i not in ans:
                ans.append(i)
        a = len(ans)
        return a

