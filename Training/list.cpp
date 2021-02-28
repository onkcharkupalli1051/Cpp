#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> l1 {1,2,3,4,5};
    list <int>::iterator p = l1.begin();
    while(p != l1.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl<<"Size of list l1 : "<<l1.size();

    list <float> l2;
    l2.push_back(10);
    cout<<endl<<"Size of list l2 : "<<l2.size();
    l2.push_front(5);

    // cout<<"\nElements of c2 : ";
    // list <int>::iterator q = l2.begin();
    // while(q != l2.end())
    // {
    //     cout<<*q<<" ";
    //     q++;
    // }
    
    //pop_back() and pop_front()


    //reverse
    cout<<endl<<"Reversed elements of l1 : ";
    l1.reverse();
    list <int>::iterator q = l1.begin();
    while(q != l1.end())
    {
        cout<<*q<<" ";
        q++;
    }

    //remove(element)
    l1.remove(5);

    //clear()
    return 0;
}