
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //The first line contains two space-separated integers
    //denoting the respective values of  (the number of 
    // variable-length arrays) and  (the number of queries).
    int n,q;
    cin>>n>>q;

    vector <int> arr(n);

    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            int val;
            cin>>val;
            arr[i].push_back(val);
        }
    }

    for(int z=0; z<q; z++)
    {
        int i,j;
        cin>>i>>j;
        cout<<arr[i][j]<<endl;
    }

    return 0;
}   