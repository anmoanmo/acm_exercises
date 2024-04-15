"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/15 16:29
@IDE:PyCharm
=============================
"""
from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        length = len(nums)
        l = 0; r = length
        while l < r:
            mid = (l + r) // 2
            if nums[mid] == target:
                return mid
            if nums[mid] < target:
                l = mid + 1
            else:
                 r = mid
        return -1