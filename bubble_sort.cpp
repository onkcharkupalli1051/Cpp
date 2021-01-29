#include<iostream>
using namespace std;

int main()
{
    int data[] = {99,22,44,88,77,55,11,33,66};
    int n = 9;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(data[j] > data[j+1])
            {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }

    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
    return 0;
}

