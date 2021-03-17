#include<iostream>
#include<cstdlib>

namespace MyNameSpace
{
    int abs(int n)
    {
        if(n < -128)
        {
            return 0;
        }
        if(n > 127)
        {
            return 0;
        }
        if(n < 0)
        {
            return -n;
        }
        return n;
    }
}

int main()
{
    std::cout<<MyNameSpace::abs(-203)<<" "
        <<MyNameSpace::abs(-6)<<" "
        <<MyNameSpace::abs(77)<<" "
        <<MyNameSpace::abs(179)<<std::endl;
    return 0;
}
