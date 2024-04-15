"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/15 17:37
@IDE:PyCharm
=============================
"""
from typing import List
class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        left, right = 0, len(nums) - 1
        s, e = 0, 0
        flag = 0
        while left <= right:
            mid = (left + right) // 2
            if nums[mid] == target:
                flag = 1
                s = mid
                right = mid - 1
            if nums[mid] > target:
                right = mid - 1
            if nums[mid] < target:
                left = mid+1
        for i in range(s, len(nums)):
            if nums[i] == target:
                e = i
        ans = [s, e]
        if flag == 0:
            return [-1, -1]
        else:
            return ans
