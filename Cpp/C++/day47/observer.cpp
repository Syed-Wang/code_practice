#include <iostream>
#include <list>

using namespace std;
// Observer pattern

class Subject;// forward declaration

class Observer {
public:
    virtual void update(Subject* s) = 0; // notify observer
};

class Subject {
public:
    virtual void attach(Observer* o) = 0; // add observer
    virtual void detach(Observer* o) = 0; // remove observer
    virtual void notify() = 0; // notify all observers
};

class ConcreteSubject : public Subject {
public:
    void attach(Observer* o)
    {
        observers.push_back(o);
    }
    void detach(Observer* o)
    {
        observers.remove(o);
    }
    void notify()
    {
        for (auto i : observers) {
            i->update(this);
        }
    }

private:
    list<Observer*> observers;
};

class ConcreteObserver : public Observer {
public:
    ConcreteObserver(Subject* s)
    {
        subject = s;
        subject->attach(this);
    }
    void update(Subject* s)
    {
        cout << "Observer notified" << endl;
    }

private:
    Subject* subject;
};

int main()
{
    Subject* s = new ConcreteSubject();
    Observer* o = new ConcreteObserver(s);
	Observer* o1 = new ConcreteObserver(s);
    s->notify();
    return 0;
}