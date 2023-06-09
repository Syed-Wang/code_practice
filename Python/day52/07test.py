# count函数
# count函数用于统计字符串中某个字符出现的次数
# 语法：字符串.count(字符，开始位置下标，结束位置下标)
# 返回值：整数
# 说明：开始位置下标和结束位置下标可以省略，如果省略开始位置下标，则默认从0开始统计，如果省略结束位置下标，则默认统计到字符串的最后
# 例子：
str1 = 'hello world'
result = str1.count('l')  # 3
print(result)
result = str1.count('l', 0, 5)  # 2
print(result)


# join函数
# join函数用于将列表中的元素拼接成一个字符串
# 语法：字符串.join(列表)
# 返回值：字符串
# 例子：
list1 = ['hello', 'world']
result = ' '.join(list1)  # hello world
print(result)
result = '-'.join(list1)  # hello-world
print(result)
