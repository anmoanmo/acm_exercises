"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/12 12:15
@IDE:PyCharm
=============================
"""

with open('2020.txt', 'r') as f:
    nums = [line.strip() for line in f.readlines()]

# nums = [list(input()) for _ in range(6)]
ans = 0
for i in range(len(nums)):
    for j in range(len(nums[i])-3):
        if nums[i][j] == '2' and nums[i][j+1] == '0' and nums[i][j+2] == '2' and nums[i][j+3] == '0' :
            ans += 1
    for j in range(len(nums[i])):
        if i < len(nums)-3:
            if nums[i][j] == '2' and nums[i + 1][j] == '0' and nums[i+2][j] == '2' and nums[i+3][j] == '0':
                ans += 1
    for j in range(len(nums[i])-3):
        if i < len(nums) - 3:
            if nums[i][j] == '2' and nums[i + 1][j + 1] == '0' and nums[i + 2][j + 2] == '2' and nums[i + 3][j + 3] == '0':
                ans += 1

print(ans)





