"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/22 21:48
@IDE:PyCharm
=============================
"""
class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        left, right = 0, num
        while left <= right:
            mid = left + (right - left) // 2
            if mid * mid > num:
                right = mid - 1
                continue
            if mid * mid < num:
                left = mid + 1
                continue
            else:
                return True
        return False


