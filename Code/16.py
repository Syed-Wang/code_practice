# 问题描述：
# 输入两个正整数m和n，求其最大公约数和最小公倍数。
# 程序分析：
# （1）最大公约数：辗转相除法(gcd: greatest common divisor)
# （2）最小公倍数：两数相乘除以最大公约数(lcm: least common multiple)


# 最大公约数
def gcd(m, n):
    if m < n:  # 保证m>n
        m, n = n, m
    while n != 0:  # 余数不为0，继续循环
        temp = m % n
        m = n
        n = temp
    return m


# 最小公倍数
def lcm(m, n):
    return m * n // gcd(m, n)


m = int(input("输入第一个正整数："))
n = int(input("输入第二个正整数："))
print("最大公约数：", gcd(m, n))
print("最小公倍数：", lcm(m, n))
