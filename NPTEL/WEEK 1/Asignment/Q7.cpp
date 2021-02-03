#include<iostream>
using namespace std;

int main()
{
    union values
    {
        int x;
        char arr[2];
    };

    union values v;
    v.arr[0] = '1';
    v.arr[1] = '2';

    cout<<v.arr[0]<< " " <<v.arr[1]<< " " <<v.x;
    return 0;
}