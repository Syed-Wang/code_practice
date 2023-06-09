# 继承
# eg:

class Animal(object):
    def run(self):
        print('Animal is running...')


# 继承Animal
class Dog(Animal):  # 括号中为继承的类名
    pass  # pass表示什么都不做，如果没有pass，代码会报错


class Cat(Animal):
    pass


dog = Dog()
dog.run()
cat = Cat()
cat.run()
print("----------------------------")


# 子类可以继承父类的所有方法
# 子类可以重写父类的方法
class Dog(Animal):
    def run(self):
        print('Dog is running...')

    def eat(self):
        print('Eating meat...')


dog = Dog()
dog.run()
dog.eat()
# 判断一个变量是否是某个类型可以用isinstance()判断
print(isinstance(dog, Dog))
print(isinstance(dog, Animal))
print(isinstance(dog, Cat))
print("----------------------------")


# 多继承：
# 多继承中，子类可以继承多个父类的方法，但是如果多个父类中有同名的方法，子类只能继承第一个父类的方法
# __mro__属性可以查看继承关系，mro是method resolution order，方法解析顺序，即查找方法时的顺序，是一个元组

# eg:
class A(object):
    def run(self):
        print('A is running...')
        print(self.__class__.__mro__)  # 查看继承关系


class B(object):
    def run(self):
        print('B is running...')
        print(self.__class__.__mro__)


class C(A, B):
    pass


c = C()  # C继承A和B
c.run()  # C继承A和B的run方法，但是只能继承A的run方法，因为A在B前面
print("----------------------------")
