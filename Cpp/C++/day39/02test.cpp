#include <iostream>

using namespace std;

namespace Diy {
class Stu {
public:
    string name;
    int age;
    float score;

public:
    void say()
    {
        // printf("%s, %d, %f\n", name, age, score);//乱码
        cout << name << ", " << age << ", " << score << endl;
    }
};
} // namespace Diy

int main()
{
    Diy::Stu s1;
    s1.name = "Tom";
    s1.age = 18;
    s1.score = 99.9f;
    s1.say();

    return 0;
}