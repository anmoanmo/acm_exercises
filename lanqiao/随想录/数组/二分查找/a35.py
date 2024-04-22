"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/15 16:42
@IDE:PyCharm
=============================
"""
from typing import List

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums)
        while left < right:
            mid = left + (right - left) // 2
            if nums[mid] == target:
                return mid
            if nums[mid] < target:
                left = mid + 1
            if nums[mid] > target:
                right = mid
        return left