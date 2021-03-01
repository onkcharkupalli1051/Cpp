#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr;
    int i,count,sum=0;

    cout<<"Enter count : ";
    cin>>count;
    arr.resize(count);

    for(i=0;i<count;i++)
    {
        cout<<"\nEnter "<<i<<" element : ";
        cin>>arr[i];
        sum += arr[i];
    }

    cout<<"\nSum : "<<sum;
    return 0;
}