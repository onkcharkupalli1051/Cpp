#include<cstring>
#include<iostream>
using namespace std;

class Person
{
    string name;
    public:
        Person(string _name = "unknown"):name(_name){}
        void show1()
        {
            cout<<name<<" ";
        }
};

class Employee : protected Person
{
    string deptName;
    public:
        Employee(string _name, string _deptname): Person(_name),deptName(_deptname){}
        void show2(){cout<<deptName<<" ";}
};

int main()
{
    Employee d("Avijit","CSE");
    d.show1();
    d.show2();
    return 0;
}