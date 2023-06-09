f = 3.14
print(f)  # 默认不输出小数点后面的0
print("%f" % f)  # 默认保留6位小数
print("%.2f" % f)  # 保留2位小数
print("%-f" % f)  # 默认保留6位小数
print("%.2f" % f)  # 保留2位小数
print(type(f))

print("------------------------")
f = 3.141592653
# 最小宽度为8，小数点后保留3位
print("%8.3f" % f)
# 最小宽度为8，小数点后保留3位，左边补0
print("%08.3f" % f)
# 最小宽度为8，小数点后保留3位，左边补0，带符号
print("%+08.3f" % f)

print("------------------------")
print("%o" % 10)  # 8进制
print("%x" % 10)  # 16进制
print("%E" % f)  # 科学计数法

print("------------------------")
print("\a")  # 发出系统响铃