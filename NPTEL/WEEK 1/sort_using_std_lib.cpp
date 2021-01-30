#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int i, int j)
{
    return (i>j);
}

int main()
{
    int data[] = {11,22,33,44,55,66,77,88,99};

    sort(data,data+9,compare);

    for(int i=0; i<9; i++)
    {
        cout<<data[i]<<" ";
    }
}
