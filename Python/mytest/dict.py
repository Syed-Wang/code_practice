print(dir(dict))  # 查看dict的属性和方法
a = {1: 'one', 2: 'two', 3: [1, 2, 3]}
print(a)
b = a
print(b)
print(type(a))
print(type(b))

c = a.copy()
print(c)
print(type(c))
print('----------------------')

print(id(a))
print(id(b))
print(id(c))
