# list列表，是一种有序的集合，可以随时添加和删除其中的元素

# 1.创建列表
# 1.1 直接创建
list1 = [1, 2, 3, 4, 5]
print(list1)

# 1.2 通过list()函数创建
list2 = list(range(1, 6))
print(list2)

# 2.访问列表元素
# 2.1 通过索引访问
print(list1[0])

# 2.2 通过切片访问
print(list1[0:3])

# 3.修改列表元素
list1[0] = 100
print(list1)  # [100, 2, 3, 4, 5]

# 4.删除列表元素
# 4.1 通过del语句删除
del list1[0]  # 删除第一个元素，如果列表为空，会报错
print(list1)  # [2, 3, 4, 5]

# 4.2 通过pop()方法删除
list1.pop()  # 默认删除最后一个元素，返回删除的元素，如果列表为空，会报错
print(list1)  # [2, 3, 4]

# 4.3 通过remove()方法删除
list1.remove(3)  # 删除指定元素，如果有多个相同元素，只删除第一个，如果没有该元素，会报错
print(list1)  # [2, 4]

# 5.添加列表元素
# 5.1 append()方法
list1.append(5)  # 在列表末尾添加元素
print(list1)  # [2, 4, 5]

# 5.2 insert()方法
list1.insert(1, 3)  # 在指定位置添加元素
print(list1)  # [2, 3, 4, 5]

# 5.3 extend()方法
list1.extend([6, 7, 8])  # 在列表末尾添加另一个列表
print(list1)  # [2, 3, 4, 5, 6, 7, 8]

# 6.列表排序
# 6.1 sort()方法，改变原列表
list3 = [1, 3, 2, 5, 4]
list3.sort()  # 默认升序排序
print(list3)  # [1, 2, 3, 4, 5]
list3.sort(reverse=True)  # 降序排序
print(list3)  # [5, 4, 3, 2, 1]
list3.sort(key=lambda x: x % 2)  # 按奇偶排序
print(list3)  # [4, 2, 5, 3, 1]

# 6.2 sorted()函数，不改变原列表
list4 = [1, 3, 2, 5, 4]
print(sorted(list4))  # [1, 2, 3, 4, 5]
print(sorted(list4, reverse=True))  # [5, 4, 3, 2, 1]
print(sorted(list4, key=lambda x: x % 2))  # [4, 2, 5, 3, 1]

# 7.列表反转
# 7.1 reverse()方法，改变原列表
list5 = [1, 2, 3, 4, 5]
list5.reverse()
print(list5)  # [5, 4, 3, 2, 1]

# 7.2 reversed()函数，不改变原列表
list6 = [1, 2, 3, 4, 5]
print(reversed(list6))  # <list_reverseiterator object at 0x000001F0C1B0F0B8>
print(list(reversed(list6)))  # [5, 4, 3, 2, 1]

# 8.列表推导式
# 8.1 生成列表，不带判断条件
list7 = [i for i in range(1, 6)]
print(list7)  # [1, 2, 3, 4, 5]

# 8.2 生成列表，带判断条件
list8 = [i for i in range(1, 6) if i % 2 == 0]
# list88 = [i if i % 2 == 0 for i in range(1, 6)]  # 错误写法
print(list8)  # [2, 4]

# 8.3 生成列表，带多个判断条件
list9 = [i for i in range(1, 7) if i % 2 == 0 if i % 3 == 0]
print(list9)  # [6]

# 8.4 生成列表，带多个判断条件，带else
list10 = [i if i % 2 == 0 else -i for i in range(1, 6)]
# list11 = [i for i in range(1, 6) if i % 2 == 0 else -i]  # 错误写法
print(list10)  # [-1, 2, -3, 4, -5]

# 8.5 生成列表，带多个判断条件，带多个else
list12 = [i if i % 2 == 0 else -i if i % 3 == 0 else i * 2 for i in range(1, 7)]
print(list12)  # [2, 2, -3, 4, 10, 6]

# 8.6 生成列表，带多个判断条件，带多个for循环
list13 = [(i, j) for i in range(1, 4) for j in range(1, 4)]
print(list13)  # [(1, 1), (1, 2), (1, 3), (2, 1), (2, 2), (2, 3), (3, 1), (3, 2), (3, 3)]

# 8.7 生成列表，带多个判断条件，带多个for循环，带if
list14 = [(i, j) for i in range(1, 4) for j in range(1, 4) if i != j]
print(list14)  # [(1, 2), (1, 3), (2, 1), (2, 3), (3, 1), (3, 2)]

# 8.8 生成列表，带多个判断条件，带多个for循环，带if，带else
list15 = [(i, j) if i != j else (i, -j) for i in range(1, 4) for j in range(1, 4)]
print(list15)  # [(1, -1), (1, 2), (1, 3), (2, 1), (2, -2), (2, 3), (3, 1), (3, 2), (3, -3)]

# 8.9 生成列表，带多个判断条件，带多个for循环，带if，带多个else
list16 = [(i, j) if i != j else (i, -j) if i % 2 == 0 else (i, j * 2) for i in range(1, 4) for j in range(1, 4)]
print(list16)  # [(1, 2), (1, 2), (1, 3), (2, 1), (2, -2), (2, 3), (3, 1), (3, 2), (3, 6)]

# 9.列表嵌套
# 9.1 二维列表
list17 = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
print(list17[0][1])  # 2

# 9.2 三维列表
list18 = [[[1, 2, 3], [4, 5, 6]], [[7, 8, 9], [10, 11, 12]]]
print(list18[0][1][2])  # 6

# 10.列表的遍历
list19 = [1, 2, 3, 4, 5]
for i in list19:  # 1 2 3 4 5
    print(i, end=' ')  # 1 2 3 4 5
print()
for i in range(len(list19)):  # 0 1 2 3 4
    print(list19[i], end=' ')  # 1 2 3 4 5
print()
# enumerate()函数，同时遍历下标和元素
for i, v in enumerate(list19):  # 0 1 2 3 4
    print(i, v, end=' ')  # 1 2 3 4 5
print()
# zip()函数，同时遍历多个列表
list20 = [6, 7, 8, 9, 10]
for i, j in zip(list19, list20):  # 1 2 3 4 5
    print(i, j, end=' ')  # 1 6 2 7 3 8 4 9 5 10
print()
# reversed()函数，反向遍历
for i in reversed(list19):  # 5 4 3 2 1
    print(i, end=' ')  # 5 4 3 2 1
print()
# sorted()函数，排序遍历
for i in sorted(list19):  # 1 2 3 4 5
    print(i, end=' ')  # 1 2 3 4 5
print()
# ......

