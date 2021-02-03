#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s = "Programming In C++";
    s.resize(11);

    cout<<s.capacity()<<" "<<s.length();
    return 0;
}
