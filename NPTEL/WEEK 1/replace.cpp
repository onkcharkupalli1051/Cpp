#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int data[] = {11,44,33,44,55};

    replace(data,data+2,44,22);

    for(int i=0; i<5;i++)
        cout<<data[i]<<" ";
    return 0;
}