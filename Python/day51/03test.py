""" print() 函数的详细语法格式如下：
print (value,...,sep='',end='\n',file=sys.stdout,flush=False) """
# sep：用来间隔多个输出参数，默认值是一个空格。
# end：用来设定以什么结尾。默认值是换行符\n，我们可以换成其他字符串。
# file：要写入的文件对象。
# flush：输出是否被缓存通常决定于 file，但如果 flush 关键字参数为 True，流会被强制刷新。
# 例如：
s = input("请输入一个字符串:")
print(s)
# 在python3中，input接收到的数据类型是str
print(type(s))
# python3中print默认是换行的，如果不想换行，可以使用end参数
print("a", end=" ")
print("b")
a = 108
c = chr(a)
print(type(c))
# python3中，字符串和字符不能直接相加
print("abc" + c, sep="*")
print("abc", c, sep="*")
# python3中，格式化字符串的方法
print("%s %c" % ("abc", c))
# python3中，格式化字符串的方法
print("{} {}".format("abc", c))
# python3中，格式化字符串的方法
print("{0} {1}".format("abc", c))

f = open("test.txt", "w")  # 打开文件
f.write("hello world")  # 写入文件
# 指定输出位置
print("写入成功", file=f)
f.close()  # 关闭文件
