#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int sum = 0;
    for(int i=0;i<=n;++i)
    {
        cout<<i<<endl;
        sum += i;
    }
    cout<<"\nSum : "<<sum;
    return 0;
}
