"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/12 14:44
@IDE:PyCharm
=============================
"""
# def solve(n,m):
#     i_num = n * 2 - 1
#     tri = ((i_num-1)*(i_num-1)-(i_num-1))/2 +(i_num-1);
#     ans = tri + m
#     return ans
# n,m = 20, 20
# print(int(solve(n, m)))

maol = [[0]*80 for i in range(80)]
x, y = 0, 0
maol[x][y] = 1
count = 1

while True:
    if y+1 >= 80:
        break
    if y+1 < 80:
        y += 1
        count += 1
        maol[x][y] = count
    while y - 1 >= 0:
        x += 1
        y -= 1
        count += 1
        maol[x][y] = count

    if x + 1 >= 80:
        break
    if x + 1 < 80:
        x += 1
        count += 1
        maol[x][y] = count
    while x - 1 >= 0:
        x -= 1
        y += 1
        count += 1
        maol[x][y] = count

print(maol[19][19])


