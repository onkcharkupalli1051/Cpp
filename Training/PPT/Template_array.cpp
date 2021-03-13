/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<array>
using namespace std;

int main()
{
    
    array <int,5> a1 {1,2,3,4,5};
    cout<<"array a1: ";
    for(int i=0;i<5;i++){
        cout<<a1[i]<<" ";
    }
    
    //at(), size():
    
    cout<<"\nvalue at 3rd location: "<<a1.at(3)<<endl;
    
    //front(), back() method:
    cout<<"front value in array: "<<a1.front()<<endl;
    cout<<"back value in array: "<<a1.back()<<endl;
    
    //fill() method:
    array <int,5> a2;
    a2.fill(100);
    cout<<"array a2: ";
    for(int j=0;j<5;j++){
        cout<<a2[j]<<" ";
    }
    
    //swap() method
    a1.swap(a2);
    cout<<"\n.......after swap():....... ";
    cout<<"\narray a1: ";
    for(int k=0;k<5;k++){
        cout<<a1[k]<<" ";
    }
    cout<<"\narray a2: ";
    for( int l=0;l<5;l++){
        cout<<a2[l]<<" ";
    }
    
    
    return 0;
}

