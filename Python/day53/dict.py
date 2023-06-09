# dict 字典
# 字典是一种映射类型，字典用"{ }"标识，它是一个无序的键(key) : 值(value)对集合。
# 键(key)必须使用不可变类型。
# 在同一个字典中，键(key)必须是唯一的。
# dict = {key1 : value1, key2 : value2 }

# 创建字典，使用{}或dict()
dict1 = {'Alice': '2341', 'Beth': '9102', 'Cecil': '3258'}
print("dict1: ", dict1)
# 访问字典里的值，使用键值
print("dict1['Alice']: ", dict1['Alice'])

# 修改字典里的值，使用键值
dict1['Alice'] = '1234'
print("dict1['Alice']: ", dict1['Alice'])

# 删除字典元素，使用del
del dict1['Alice']
# print("dict1['Alice']: ", dict1['Alice'])  # KeyError: 'Alice'

# 字典键的特性
# 1.不允许同一个键出现两次。创建时如果同一个键被赋值两次，后一个值会被记住
dict2 = {'Name': 'Runoob', 'Age': 7, 'Name': '小菜鸟'}
print("dict2['Name']: ", dict2['Name'])

# 2.键必须不可变，所以可以用数字，字符串或元组充当，所以用列表就不行
# dict3 = {['Name']: 'Runoob', 'Age': 7}  # TypeError: unhashable type: 'list'

# 3.键值对的数量
print("len(dict1): ", len(dict1))

# 4.字符串格式化输出
print("dict1: %(dict1)s" % {"dict1": dict1})

# 5.清空字典
dict1.clear()
print("dict1: ", dict1)

# 6.删除字典
del dict1
# print("dict1: ", dict1)  # NameError: name 'dict1' is not defined

# 7.字典类型转换
# dict() 函数用于创建一个字典。
# dict() 函数可以直接从键值对序列中构建字典如下：
dict4 = dict([('Runoob', 1), ('Google', 2), ('Taobao', 3)])
print("dict4: ", dict4)
# 也可以通过关键字参数来构建字典如下：
dict5 = dict(Runoob=1, Google=2, Taobao=3)
print("dict5: ", dict5)

# 8.字典的方法
# 8.1 dict.clear() 删除字典内所有元素
dict6 = {'Name': 'Runoob', 'Age': 7}
dict6.clear()
print("dict6: ", dict6)

# 8.2 dict.copy() 返回一个字典的浅复制
dict7 = {'Name': 'Runoob', 'Age': 7}
dict8 = dict7.copy()
print("dict8: ", dict8)

# 8.3 dict.fromkeys() 创建一个新字典，以序列seq中元素做字典的键，value为字典所有键对应的初始值

# 8.4 dict.get(key, default=None) 返回指定键的值，如果值不在字典中返回default值
dict9 = {'Name': 'Runoob', 'Age': 7}
print("dict9.get(Weight): ", dict9.get('Weight'))  # None
print("dict9.get('Age'): ", dict9.get('Age'))

# 8.5 dict.items() 以列表返回可遍历的(键, 值) 元组数组
dict10 = {'Name': 'Runoob', 'Age': 7}
print("dict10.items(): ", dict10.items())

# 8.6 dict.keys() 以列表返回一个字典所有的键
dict11 = {'Name': 'Runoob', 'Age': 7}
print("dict11.keys(): ", dict11.keys())
