#include<iostream>
#include<string>
using namespace std;

typedef enum E_TYPE {Er, Mgr};

class Engineer
{
    protected:
        string name;
        E_TYPE type;
    public:
        Engineer(const string& name_, E_TYPE e=Er) : name(name_), type(e){}
        E_TYPE GetType() {return type;}
        void ProcessSalary()
        {
            cout<<name<<": Process Salary for Engineer"<<endl;
        }
};

class Manager : public Engineer 
{
    Engineer *reports[10];
    public:
        Manager(const string& name_, E_TYPE e = Mgr) : Engineer(name_,e) {}
        void ProcessSalary()
        {
            cout<<name<<": Process Salary for Manager"<<endl;
        }
};

int main()
{
    Engineer e1("Rohit"), e2("Kavita"), e3("Shambu");
    Manager m1("Kamala"),m2("Rajib");
    Engineer *staff[] = {&e1,&m1,&m2,&e2,&e3};

    for(int i=0; i<sizeof(staff)/sizeof(Engineer*);++i)
    {
        E_TYPE t = staff[i]->GetType();
        if(t==Er) staff[i]->ProcessSalary();
        else if(t==Mgr)((Manager*)staff[i])->ProcessSalary();
        else cout<<"Invalid Staff Type"<<endl;
    }
    return 0;
}