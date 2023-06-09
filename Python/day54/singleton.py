# 单例模式：一个类只能创建一个对象，如果再次创建对象，返回的是第一次创建的对象
# 1.定义一个类属性，用于保存对象的引用
# 2.重写__new__方法，如果类属性中没有对象的引用，就调用父类的__new__方法创建对象，并保存到类属性中
# 3.如果类属性中有对象的引用，就直接返回类属性中的对象引用
class Singleton(object):  # 单例类
    # 1.定义一个类属性，用于保存对象的引用
    __instance = None

    # 2.重写__new__方法，如果类属性中没有对象的引用，就调用父类的__new__方法创建对象，并保存到类属性中
    def __new__(cls, *args, **kwargs):  # cls表示当前类, *args表示位置参数, **kwargs表示关键字参数
        # 3.如果类属性中有对象的引用，就直接返回类属性中的对象引用
        if cls.__instance is None:
            cls.__instance = super().__new__(cls)  # super()表示父类
        return cls.__instance

    def __init__(self, name):  # 初始化方法
        self.name = name  # 实例属性


a = Singleton('aa')
b = Singleton('bb')
print(a.name)
print(b.name)
