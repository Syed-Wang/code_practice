import collections  # 导入collections模块

# 创建一个空的双端队列
d = collections.deque()
print(d)
print(type(d))

d.append('a')  # 在右侧添加一个元素
d.extend('cde')  # 在右侧添加多个元素
# d.appendleft('b') # 在左侧添加一个元素
print(d)

# 实现队列的功能
d.append('f')  # 在右侧添加一个元素
d.popleft()  # 从左侧弹出一个元素
print(d)

# 实现栈的功能
d.pop()  # 从右侧弹出一个元素
print(d)


