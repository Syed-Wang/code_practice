# 类

# 创建一个人类
class Person:  # 类名首字母大写
    # 属性，python中的类属性必须要有初始值
    name = '张三'
    age = 18

    # 方法
    def eat(self):  # self代表类本身，类似于C++中的this指针，但是在调用的时候不需要传入
        print(self.name, '在吃饭')

    def sleep(self):
        print(self.name, '在睡觉')

    def play(self):
        print(self.name, '在玩')

    def __init__(self, name="wang", age=18, score=0):  # 初始化方法，创建对象的时候会自动调用
        self.name = name
        self.age = age
        self.score = score  # 现在score是类属性

    def __str__(self):  # 重写__str__方法，打印对象的时候会自动调用
        return 'name: %s, age: %d, score: %d' % (self.name, self.age, self.score)


# 创建一个对象
p = Person()
print(p)

p.age = 20  # 修改属性
p.score = 100  # 添加属性
print(p)  # 打印对象

p.eat()  # 吃饭
p.sleep()  # 睡觉
p.play()  # 玩
