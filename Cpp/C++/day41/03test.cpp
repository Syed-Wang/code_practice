#include <iostream>

using namespace std;

class Plan {
public:
    virtual void fly() // 虚函数
    {
        cout << "Plan fly" << endl;
    }
    virtual ~Plan() { } // 虚析构函数
};
class J20 : public Plan {
public:
    void fly() override
    {
        cout << "J20 fly" << endl;
    }
};
class Airbus : public Plan {
public:
    void fly() override
    {
        cout << "Airbus fly" << endl;
    }
};
class Polite {
public:
    void diver(Plan& plan)
    {
        plan.fly();
    }
};

int main()
{
    J20 j20;
    Airbus airbus;

    Polite polite;
    polite.diver(j20);
    polite.diver(airbus);

    return 0;
}