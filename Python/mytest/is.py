import time  # 导入time模块

# 1.获取当前时间戳
t1 = time.gmtime()
t2 = time.gmtime()  # 获取当前时间戳

print(t1 == t2)
print(t1 is t2)
