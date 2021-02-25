#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v1 {11,22,33,44,55};

    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }

    // cout<<endl<<"Enter elements : ";
    // vector <float> f1;
    // for(int i=0; i<6; i++)
    // {
    //
    //     cin>>f1[i];
    // }
    // cout<<endl<<"Elements are : ";
    
    // for(int i=0; i<f1.size(); i++)
    // {
    //     cout<<f1[i]<<" ";
    // }

    cout<<endl;

    vector <string> s1{2,"hello"};  //it will fill hello two timws in s1
    cout<<"Array s1 : ";
    for(int i=0; i<s1.size(); i++)
    {
        cout<<s1[i]<<" ";
    }

    //capacity
    cout<<endl<<"Capacity of s1 : "<<s1.capacity()<<endl;

    //push_back()
    s1.push_back("hi");
    for(int i=0; i<s1.size(); i++)
    {
        cout<<s1[i]<<" ";
    }
    cout<<endl<<"Capacity of s1 : "<<s1.capacity()<<endl;
    
    s1.push_back("new");
    for(int i=0; i<s1.size(); i++)
    {
        cout<<s1[i]<<" ";
    }
    cout<<endl<<"Capacity of s1 : "<<s1.capacity()<<endl;
    

    //pop_back()
    s1.pop_back();
    for(int i=0; i<s1.size(); i++)
    {
        cout<<s1[i]<<" ";
    }
    cout<<endl<<"Capacity of s1 : "<<s1.capacity()<<endl;
    
    //at() method

    //size() : how many elements are ther
    //capacity() : total block present in that collection
    //clear(): delete all the elements...size will be 0 and capacity will be 6

    //front() :return front element
    //back() : return back element

    //accessing elements using iterator
    vector <int>:: iterator p=v1.begin();
    cout<<endl<<"Vector v1 :";
    while(p != v1.end())
    {
        cout<<" "<<*p;
        p++;
    }


    return 0;
}