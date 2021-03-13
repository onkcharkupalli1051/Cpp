/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> l1 {11,22,33,44,55};
    list <int>::iterator p=l1.begin();
   while(p!=l1.end()){
       cout<<" "<<*p;
       p++;
   }
   
   
   list <float> l2;
   l2.push_back(10);
   cout<<"\nsize of list"<<l2.size();
   l2.push_front(20);
   list <float>::iterator q=l2.begin();
   while(q!=l2.end()){
       cout<<" "<<*q;
       q++;
   }
   
   l1.pop_back();
   l1.pop_front();
   list <int>::iterator r=l1.begin();
   cout<<"after pop() l1 is:\t";
   while(r!=l1.end()){
       cout<<" "<<*r;
       r++;
   }
   
   l1.reverse();
   list <int>::iterator s=l1.begin();
   cout<<"\nreverse of l1:\t";
   while(s!=l1.end()){
       cout<<" "<<*s;
       s++;
   }
   
   //remove() and clear() method
   
   l1.remove(33);
   cout<<"\nafter removing 33:\t";
   list <int>::iterator t=l1.begin();
   while(t!=l1.end()){
       cout<<" "<<*t;
       t++;
   }
   
   l1.clear();
   cout<<"\n after clearing list:\t";
   list <int>::iterator u=l1.begin();
   while(u!=l1.end()){
       cout<<" "<<*u;
       u++;
   }

    return 0;
}
