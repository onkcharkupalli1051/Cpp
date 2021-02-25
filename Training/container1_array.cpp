#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int,5> a1 {1,2,3,4,5};
    cout<<"array a1 : ";
    for(int i=0; i<5; i++)
    {
        cout<<a1[i]<<" ";
    }

    //object.at();
    cout<<"\nValue at 3rd Location : "<<a1.at(2)<<endl;

    array <float,5> b1 {6.56,7.65,8.56,9.6,10.00};
    cout<<"array b2 : ";
    for(int i=0; i<5; i++)
    {
        cout<<b1[i]<<" ";
    }

    cout<<"\nValue at 2nd location of b2 : "<<b1.at(1);

    //object.size();
    cout<<endl<<"Size of array b1 : "<<b1.size();

    //front
    cout<<endl<<"Front value in array b1: "<<b1.front();

    //back()
    cout<<endl<<"Back of array a1 : "<<a1.back()<<endl;

    //fill(value) method fills a value in all places in array
    array <int,10> a2;
    a2.fill(20);
    for(int i=0; i<5; i++)
    {
        cout<<a2[i]<<" "<<endl;
    }

    array <int,10> a3 {11,55,44,22,66};
    for(int i=0; i<5; i++)
    {
        if(a3[i]%2 == 0)
        {
            a3[i] = 1;
        }
        else
        {
            a3[i] = 0;
        }
    }
    for(int i=0; i<5; i++)
    {
        cout<<a3[i]<<" "<<endl;
    }

    //swap() method
    a2.swap(a3);
    for(int i=0; i<5; i++)
    {
        cout<<a2[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<a3[i]<<" ";
    }
    return 0;
}

