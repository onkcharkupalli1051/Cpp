/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

int main()
{
     vector <int> v1 {11,22,33,44,55};
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    
    //giving size of ector while declaring vector variable:
    
    vector <string> v2(2,"hello");
    cout<<"\narray a2: ";
    for(int j=0;j<v2.size();j++){
        cout<<v2[j]<<" ";
    }
    
    //capacity(), push_back() method...
    cout<<"\ncapacity of v2: "<<v2.capacity()<<endl;
    v2.push_back("hii");
    cout<<"After back pushing capacity of v2: "<<v2.capacity()<<endl;
    
    //pop_back() method
    v1.pop_back();
    cout<<"after poping out v1: ";
    for(int k=0;k<v1.size();k++){
        cout<<v1[k]<<" ";
    }
    cout<<"\ncapacity of v2: "<<v2.capacity()<<endl;
    
    //size(), clear() method
    
    cout<<"size of v2:"<<v2.size()<<endl;
    v2.clear();
    cout<<"after clearign v2 size of v2 noe: "<<v2.size()<<endl;
    
    //at() method 
    
    cout<<"value in a1 at 2nd poistion is: "<<v1.at(2)<<endl;
    
    //front(), back() method
    
    cout<<"front elelemnt in v1 is: "<<v1.front()<<endl;
    cout<<"back elelemnt in v1 is: "<<v1.back()<<endl;
    
    //accessing elements in vector using iterator:
    
    vector <int>:: iterator it=v1.begin();
    cout<<"vector v1: ";
    while(it!=v1.end())
    {
        cout<<" "<<*it;
        it++;
    }
    

    return 0;
}
