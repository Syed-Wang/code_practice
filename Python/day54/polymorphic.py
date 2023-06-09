# 多态：
# 1. 多态的概念：
# 多态是一种使用对象的方式，子类重写父类方法，调用不同子类对象的相同父类方法，可以产生不同的执行结果。
# 2. 多态的好处：
# 多态的存在提高了代码的灵活度，以适应不同的对象，也是继承的一种体现。
# 3. 多态的实现：
# 3.1 继承
# 3.2 方法重写
# 3.3 父类引用指向子类对象

# eg:

class Animal(object):
    def run(self):
        print("Animal is runing...")


class Dog(Animal):
    def run(self):
        print("Dog is runing...")


class Cat(Animal):
    def run(self):
        print("Cat is runing...")


def run_now(animal):
    animal.run()


a = Animal()
d = Dog()
c = Cat()
run_now(a)
run_now(d)
run_now(c)
print("----------------------------")


# 静态语言 vs 动态语言
# 对于静态语言（例如Java）来说，如果需要传入Animal类型，则传入的对象必须是Animal类型或者它的子类，
# 否则，将无法调用run()方法。
# 对于Python这样的动态语言来说，则不一定需要传入Animal类型。我们只需要保证传入的对象有一个run()
# 方法就可以了：
class Timer(object):
    def run(self):
        print('Timer is runing...')


run_now(Timer())
print("----------------------------")
# 这就是动态语言的“鸭子类型”，它并不要求严格的继承体系，一个对象只要看起来像鸭子，
# 走起路来像鸭子，那它就可以被看做是鸭子。
