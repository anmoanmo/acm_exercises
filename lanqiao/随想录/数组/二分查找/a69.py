"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/22 21:35
@IDE:PyCharm
=============================
"""

class Solution:
    def mySqrt(self, x: int) -> int:
        left, right = 0, x
        if x <= 1:
            return x
        while left <= right:
            mid = left + (right - left) // 2
            if mid * mid > x:
                right = mid - 1
                continue
            if mid * mid < x:
                left = mid + 1
                continue
            else:
                return mid
        return right

    # 官方题解
    class Solution:
        def mySqrt(self, x: int) -> int:
            # 1和0的算术平方根为其自身
            if x <= 1: return x
            # 对于大于1的数x，其向下取整的算术平方根都小于等于x/2
            # 我们的搜索区间是左闭右开，因此右边界取到x/2+1
            left, right = 0, x // 2 + 1
            while left < right:
                mid = left + ((right - left) >> 1)
                if mid * mid <= x:
                    # 找到一个满足算数平方根的数，暂存ans = mid
                    # 向右查找满足条件的更大，left = mid + 1。因此ans = left - 1，我们可以不用暂存ans
                    left = mid + 1
                else:
                    right = mid  # 数值过大，不为算术平方根，向左查找

            return left - 1
