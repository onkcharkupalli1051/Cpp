#include<iostream>
#include<vector>
using namespace std;
#define SIZE 10

int main()
{
    vector<int> arr(SIZE);
    int sum=0,count,i;

    cout<<"Enter no. of elements : ";
    cin>>count;

    for(i=0;i<count;i++)
    {
        cout<<"\nEnter "<<i<<" element : ";
        cin>>arr[i];
    }

    for(i=0;i<count;i++)
    {
        sum += arr[i];
    }

    cout<<"\nSum : "<<sum;
    return 0;
}