"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/28 12:59
@IDE:PyCharm
=============================
"""
# 艾氏筛
# n = 10**8  # 代求的范围中的最大值
# k = 0
# s = [True for i in range(n)]  # 首先默认所有数都是质数
# z = []
# for i in range(2,n):
#     if s[i]:  # 判断是否为质数，如果没有被标记过，就是质数
#         k+=1
#         z.append(i) #添加质数
#         for j in range(i+i,n,i):   # 将是指数的倍数的数都改为False
#             s[j] = False
#
# print(k) # 个数
# print(z) # 质数


n = 10**7
a = [True for i in range(n)]
z = []

for i in range(2, n):
    if a[i]:
        z.append(i)
        for j in range(i+1, n, i):
            a[j] = False

count = 0
for i in range(1111,111112):
    if i in z:
        if i % 10 == 1:
            count +=1
print(z)
print(count)