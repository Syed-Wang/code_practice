# 分割函数
# split()函数
# 语法：字符串.split(分隔符, num)
# 参数说明：
# 分隔符：字符串类型，表示每个元素之间的分隔符，默认为空格
# num：表示分割次数，默认为-1，即分割所有
# 返回值：列表类型，表示分割后的字符串列表
# 注意：分割符不会出现在返回的列表中
# 例子：
s = 'hello world'
result = s.split(' ')  # ['hello', 'world']
print(type(result))  # <class 'list'>
print(result)  # ['hello', 'world']
s1 = ''
for i in result[::-1]:
    s1 += i
    s1 += ' '
print(s1)  # worldhello

"""
splitlines()函数
语法：字符串.splitlines(keepends)
参数说明：
keepends：布尔类型，表示是否保留换行符，默认为False
返回值：列表类型，表示分割后的字符串列表
注意：换行符不会出现在返回的列表中
"""
# 例子：
ss = 'hello\nworld'
result = ss.splitlines()  # ['hello', 'world']
print(type(result))  # <class 'list'>
print(result)  # ['hello', 'world']
