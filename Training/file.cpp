#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int rollno;
    char name[10],ch[10];

    cout<<"Enter roll and name : ";
    cin>>rollno>>name;

    ifstream ifs;
    ifs.open("myfile.txt");
    
    while(!ifs.eof()){
        ifs>>ch;
        cout<<ch;
    }
    ifs.close();
    return 0;
}
