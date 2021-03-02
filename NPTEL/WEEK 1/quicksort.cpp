#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b)
{
    return (a<b);
}

int main()
{
    int data[] = {11,55,44,77,88};

    sort(data,data+5,compare);

    for(int i=0;i<5;i++)
        cout<<data[i]<<" ";
    return 0;
}
