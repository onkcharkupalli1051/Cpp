/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <int, string> student;
    student[1]="Ajay";
    student[2]="vijay";
    student[3]="Amar";
    student[4]="Amay";
    
    
    map <string, int>faculty {   {"Reshma Shinde",101},{"Hiremath Sridevi",201},{"Jeurkar sneha",301}, {"P.S.Kankal",401},{"S.A.shinde",501}  };
    
    //accessing values from map:
    
    cout<<faculty["Reshma Shinde"]<<endl;
    cout<<student[1]<<endl;
    
    
    //accssing all values using loop:
    
    map <int, string>::iterator p=student.begin();
    while(p!=student.end()){
        cout<<p->first<<" "<<p->second<<endl;
        p++;
    }
    
    //at(), size(), empty() method:
    
    cout<<student.at(4)<<endl;
    cout<<faculty.at("Reshma Shinde")<<endl;
    
    cout<<student.size()<<endl;
    cout<<student.empty()<<endl; 
    
    //insert() method
    
    student.insert(pair<int, string>(5,"Aarav"));
    cout<<student.size()<<endl;
    map <int, string>::iterator q=student.begin();
    while(q!=student.end()){
        cout<<q->first<<" "<<q->second<<endl;
        q++;
    }
    
    
    return 0;
}
