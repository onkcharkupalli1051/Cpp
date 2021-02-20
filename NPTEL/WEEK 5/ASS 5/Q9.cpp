#include<iostream>
using namespace std;

class Company
{
    string c_name;
    public:
        Company(string _c_name) : c_name(_c_name){}     //CMP
        string getCName(){return c_name;}
};

class Employee : private Company
{
    string e_name;  //Ravi
    public:
        Employee(string _c_name = "Unknown", string _e_name = "Unknown")
            : e_name(_e_name), Company(_c_name){}
        string getEName(){return e_name;}
        //using Company::getCName;
        string getCName(){return Company::getCName();}
};

int main()
{
    Employee e("CMP","Ravi");
    cout<<e.getCName()<<" ";
    cout<<e.getEName();
    return 0;
}