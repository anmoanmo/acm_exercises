"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/23 19:03
@IDE:PyCharm
=============================
"""
from typing import List
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        l = nums
        while l.count(val) != 0:
            l.remove(val)
        return len(l)