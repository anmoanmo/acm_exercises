"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/3/19 16:04
@IDE:PyCharm
=============================
"""
# 我的答案
def sol():
    s = input()
    ans = {}
    for i in s:
        if i in ans:
            ans[i] += 1
        else:
            ans[i] = 1
    a = max(ans, key=ans.get)
    print(a)
    print(ans[a])

def ans():
    word = input()
    letter_count = {}
    for letter in word:
        if letter in letter_count:
            letter_count[letter] += 1
        else:
            letter_count[letter] = 1

    # 找到出现次数最多的字母
    max_count = max(letter_count.values())
    max_letters = [letter for letter, count in letter_count.items() if count == max_count]

    # 输出字典序最小的那个字母及其出现次数
    print(min(max_letters))
    print(max_count)

if __name__ == '__main__':
    ans()