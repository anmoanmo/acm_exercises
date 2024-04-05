"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/5 12:42
@IDE:PyCharm
=============================
"""
def fc(a1, a2, n, k):
    if a1-a2 >= 0 or k == 0:
        return False
    while max(0, 2 * a1 - a2) >=k:
        temp = a1
        a1 = 2 * a1 - a2
        a2 = temp
        n += 1
    n += 1
    return n

def main():
    n, k = map(int, input().split())
    l = list(map(int, input().split()))
    a2, a1 = l[-2], l[-1]

    for i, value in enumerate(l, start=1):
        if value < k:
            print(f"Python 3.{i} will be faster than C++")

    result = fc(a1, a2, n, k)
    if result:
        print(f"Python 3.{result} will be faster than C++")
    else:
        print("Python will never be faster than C++")


if __name__ == '__main__':
    main()