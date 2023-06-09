#include <iostream>
using namespace std;

class Student {
private:
    string m_name;
    int m_age;
    float m_score;

public:
    Student(string name, int age, float score);
    void show();
    const string getname() const;
    int getage() const;
    float getscore() const;
};

Student::Student(string name, int age, float score)
    : m_name(name)
    , m_age(age)
    , m_score(score)
{
}
void Student::show()
{
    cout << m_name << " age is " << m_age << " score is " << m_score << endl;
}
const string Student::getname() const
{
    return m_name;
}
int Student::getage() const
{
    return m_age;
}
float Student::getscore() const
{
    return m_score;
}

int main()
{
	const Student stu("zhangsan", 18, 100.3);//常对象
	//stu.show();//常对象只能调用常函数
	cout << stu.getname() << endl;
	cout << stu.getage() << endl;
	cout << stu.getscore() << endl;
	

    return 0;
}