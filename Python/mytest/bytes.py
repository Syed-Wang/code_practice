# 通过bytes()构造函数创建bytes对象
b1 = bytes()
print(b1)  # b''
print(type(b1))  # <class 'bytes'>
# 通过空字符串创建空bytes对象
b2 = b''
print(b2)  # b''
# 通过指定编码方式创建bytes对象
b3 = bytes('', encoding='utf-8')
print(b3)  # b''

# 通过b前缀创建bytes对象
b4 = b"wsyaa.com"
print(b4)  # b'wsyaa.com'
print(b4[0])  # 119
print(chr(b4[0]))  # w
print(b4[0:3])  # b'wsy'
print(b4[0:3].decode('utf-8'))  # wsy

# 通过encode()方法将字符串转换为bytes对象
b5 = "我的博客".encode('utf-8')
print(b5)  # b'\xe6\x88\x91\xe7\x9a\x84\xe5\x8d\x9a\xe5\xae\xa2'
