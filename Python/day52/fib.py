# 从键盘上输入一个数字，判断最少几步可以将其变成斐波那契数
# 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610

"""def fib(n):
    if n == 1 or n == 2:
        return 1
    else:
        return fib(n - 2) + fib(n - 1)

# __name__ == '__main__' 代表当前模块是主模块
if __name__ == '__main__':
    n = int(input("请输入一个数字:"))
    i = 1
    while True:
        if fib(i) == n:
            print("最少需要%d步" % i)
            break
        elif fib(i) > n:
            print("最少需要%d步" % (i - 1))
            break
        else:
             i += 1"""

# 从键盘上输入一个数字，判断最少加减几次1可以将其变成斐波那契数
# 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610

n = int(input("请输入一个数字:"))
# 先判断n是否是斐波那契数
a = 1
b = 1
while True:
    if a == n:  # 此时n是斐波那契数
        print("最少加减%d次" % 0)
        break
    elif a > n:  # 此时n在a和b之间
        if n - b < a - n:
            print("最少加%d次" % (n - b))
        else:
            print("最少减%d次" % (a - n))
        break
    else:
        a, b = a + b, a
