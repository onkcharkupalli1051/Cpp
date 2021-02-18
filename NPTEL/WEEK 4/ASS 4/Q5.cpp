#include<iostream>
using namespace std;

class Test{
    int X;
    static Test *instance;
    Test(int i):X(i) {}
    public:
        int getVal(){return X;}
        static Test* create(int i)
        {
            if(!instance)
                instance = new Test(i);
            return instance;
        }
        ~Test(){cout<<X;}
};

Test *Test::instance = 0;

void fun()
{
    Test *t = Test::create(2);
    cout<<t->getVal();
}

int main()
{
    Test *t = Test::create(1);
    cout<<t->getVal();
    fun();
    return 0;
}

