
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

    int Array[50][50];

    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            cin>>Array[i][j];
        }
    }

    for(int z=0;z<q;z++)
    {
        int i,j;
        cin>>i>>j;
        cout<<Array[i][j];
    }
    return 0;
}   