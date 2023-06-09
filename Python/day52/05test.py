# 字符串操作：运算符
# +：拼接
# *：重复
# in：判断是否包含
# not in：判断是否不包含
# %：格式化输出
# []：索引
# [:]：切片
# len()：长度
# max()：最大值
# min()：最小值
# str()：转换为字符串
# ord()：字符转换为ASCII码
# chr()：ASCII码转换为字符

s1 = 'hello'
s2 = 'world'
print(s1 + s2)  # helloworld
print(s1 * 3)  # hellohellohello
print('h' in s1)  # True
print('h' not in s1)  # False
print(s1 == s2)  # False
print(s1 != s2)  # True
print(s1 > s2)  # False
print(s1 < s2)  # True
# print(s1 - s2)  # TypeError: unsupported operand type(s) for -: 'str' and 'str'
print(max(s1))  # o
print(min(s1))  # e
print(len(s1))  # 5
a = 123
print(type(a))  # <class 'int'>
print(str(123))  # 123
print(type(str(123)))  # <class 'str'>
print(ord('a'))  # 97
print(chr(98))  # b
