#include<iostream>
#include<fstream>
#include<stdllib.h>

class main_branch
{
    public:
        virtual void main_menu() = 0;
};

class hotel : main_branch
{
    int room_no;
    char name[30];
    char address[30];
    char phone[10];
    char str;

    public:
        void main_menu();
        void add();
        void display();
        void rooms();
        void edit();
        int check(int);
        void modify(int);
        void delete_rec(int);

};

void hotel::main_menu()
{
    int choice;

    while(choice != 5)
    {
        cout<<"\n\t\t\t\t************";
        cout<<
    }
}


int main()
{
    switch()
    {
        case 1:
            
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            exit(0);
        default:
            cout<<;
        
    }
    return 0;
}




















/*
Qt : GUI
*/