url = "https://www.wsyaa.com"

# find()方法
# 1.查找第一次出现的位置
# 2.如果没有找到，返回-1
# 3.如果找到，返回第一次出现的位置
pos1 = url.find(":")
print(pos1)

# rfind()方法
# 1.查找最后一次出现的位置
# 2.如果没有找到，返回-1
# 3.如果找到，返回最后一次出现的位置
pos2 = url.rfind(".")
print(pos2)

# index()方法
# 1.查找第一次出现的位置
# 2.如果没有找到，报错
# 3.如果找到，返回第一次出现的位置
pos3 = url.index("x")
print(pos3)

# rindex()方法
# 1.查找最后一次出现的位置
# 2.如果没有找到，报错
# 3.如果找到，返回最后一次出现的位置
pos4 = url.rindex("a")
print(pos4)
