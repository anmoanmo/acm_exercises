"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/8 20:17
@IDE:PyCharm
=============================
"""

n, m = map(int, input().split())
ma = [list(map(int, input().split())) for _ in range(n)]
x1, y1, x2, y2 = map(int, input().split())
d = [[0, 1], [-1, 0], [0, -1], [1, 0]]

x, y, z = x1, y1, 0
bfs = [[x-1, y-1, z]]
flag = False

while bfs:
    a = bfs.pop(0)
    if a[0] == x2-1 and a[1] == y2-1:
        flag = True
        print(a[2])
        break
    for i in d:
        if 0 <= a[0] + i[0] < n and 0 <= a[1] + i[1] < m and ma[a[0] + i[0]][a[1] + i[1]] == 1:
                ma[a[0] + i[0]][a[1] + i[1]] = 0 # 不回头
                bfs.append([a[0] + i[0], a[1] + i[1], a[2]+1])

if not flag:
    print(-1)

