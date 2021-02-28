#include<iostream>
using namespace std;

int main()
{
    int value;
    while(true)
    {
        cout<<"\nOperations:\n1. Enter data\n2. Display Data";
        cout<<"\n3. Search Data\n4. Update Data\n5. Delete data\n6. Exit";
        cout<<"\nEnter your choice : ";
        cin>>value;
        switch(value)
        {
            case 1:
                enter();
                break;
            case 2:
                show();
                break;
            case 3:
                search();
                break;
            case 4:
                update();
                break;
            case 5:
                deleterecord();
                break;
            case 6:
                exit(0);
            default:
                cout<<"\nInvalid Input.";
        }
    }
    return 0;
}