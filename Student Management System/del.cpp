#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class Student
{
    int rollno,grade;
    string fname,mname,lname,dob,address;
    public:
        void show_data();
        void search_student(int search_key);
        void add_student();
        void edit_student();
};

void Student::show_data()
{
    cout<<endl<<"Student Details : "<<endl<<"Roll no : "<<rollno<<"Grade : "<<grade;
    cout<<endl<<"Name : "<<fname<<" "<<mname<<" "<<lname;
    cout<<endl<<"DOB : "<<dob<<endl<<"Address : "<<address;
    return;
}

void Student::search_student(int search_key)
{
    if(rollno == search_key)
    {
        cout<<"Data of rollno. "<<rollno<<" exists.";
    }
    show_data();
    return;
}

void Student::add_student()
{
    cout<<endl<<"Add Student : "<<endl<<"Enter rollno. grade(space)";
    cin>>rollno>>grade;
    cout<<endl<<"Enter fname mname lname : ";
    cin>>fname>>mname>>lname;
    cout<<endl<<"Enter dob(DDMMYYYY) : ";
    cin>>dob;
    cout<<endl<<"ENter address";
    cin>>address;
    return;
}

void Student::edit_student()
{
    cout<<endl<<"Original Data : ";
    show_data();
    cout<<endl<<"Edit Student Data : "<<endl<<"Enter rollno. grade(space)";
    cin>>rollno>>grade;
    cout<<endl<<"Enter fname mname lname : ";
    cin>>fname>>mname>>lname;
    cout<<endl<<"Enter dob(DDMMYYYY) : ";
    cin>>dob;
    cout<<endl<<"Enter address";
    cin>>address;
    cout<<endl<<"New Data : ";
    show_data();
    return;
}

int main()
{
    int choice;
    Student s;
    cout<<"                 Student Management System                          "<<endl;
    while(1)
    {
        cout<<"**************************************************"<<endl;
        cout<<"Operations"<<endl<<"1. Add student data"
            <<endl<<"2. Edit Student Data"<<endl<<"3. Search Student"<<endl<<"4. Exit"<<endl<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                s.add_student();
                break;
            case 2:
                s.edit_student();
                break;
            case 3:
                int temproll;
                cout<<"\nENter roll no. :";
                cin>>temproll;
                s.search_student(temproll);
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}