#include<iostream>
using namespace std;

namespace name{
    class Test{
        int a;
        public:
            Test(int x):a(x){}
            void print(cout<<a;)
    };
}

int main()
{
    using name::Test t(5);
    t.print();
    return 0;
}