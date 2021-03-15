#include<iostream>
#include "String.h"

using namespace std;

class Name
{
    String firstName, lastName;

    public:
        Name(const char* fname, const char* lname):
            firstName(fname), lastName(lname)
            {
                cout<<"Name ctor : ";
                print();
                cout<<endl;
            }
        ~Name()
        {
            cout<<"Name dtor : ";
            print();
            cout<<endl;
        }
        void print()
        {
            firstName.print();
            cout<<" ";
            lastName.print();
        }
};

class Address
{
    unsigned int houseNo;
    String street, city, pin;

    public:
        Address(unsigned int hn, const char* sn, const char* cn, const char* pn):
        hn(houseNo), street(sn), city(cn), pin(pn)
        {
            cout<<"Address ctor : ";
            print();
            cout<<endl;
        }
        ~Address()
        {
            cout<<"Addresss dtor";
            print();
            cout<<endl;
        }
        void print()
        {
            cout<<houseNo<<" "<<hn<<" ";
            street.print();
            cout<<" ";
            city.print();
            cout<<" ";
            pin.print();

        }
};

int main()
{
    Name n("onkar","charkupalli");
    Address a(33,"rk","solapur,"413006");   
    return 0;
}