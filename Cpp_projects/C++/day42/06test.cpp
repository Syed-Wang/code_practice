// Description: 工厂模式
// 工厂模式是一种创建型设计模式， 它提供了一种创建对象的最佳方式。
// 在工厂模式中， 我们创建对象而无需暴露创建逻辑并引用新的对象类型。
// 通过使用工厂方法， 我们可以将对象创建代码从业务逻辑代码中分离出来。
#include <iostream>

using namespace std;

class Phone {// 抽象产品类
public:
    virtual void call() = 0;
};

class Iphone : public Phone {// 具体产品类
public:
    void call() override
    {
        cout << "Iphone call" << endl;
    }
};

class Android : public Phone {// 具体产品类
public:
    void call() override
    {
        cout << "Android call" << endl;
    }
};

class AbstractFactory {// 抽象工厂类
public:
	virtual Phone* createPhone() = 0;
};

class IphoneFactory : public AbstractFactory {// 具体工厂类
public:
	Phone* createPhone() override
	{
		return new Iphone;
	}
};

class AndroidFactory : public AbstractFactory {// 具体工厂类
public:
	Phone* createPhone() override
	{
		return new Android;
	}
};

int main()
{
    AbstractFactory* factory = new IphoneFactory;// 抽象工厂类指针指向具体工厂类
	Phone* phone = factory->createPhone();// 抽象产品类指针指向具体产品类
	phone->call();// 调用具体产品类的方法

    return 0;
}