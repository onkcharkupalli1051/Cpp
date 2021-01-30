#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int data[] = {11,22,33,44,55};
    int key = 33;

    if(binary_search(data,data+5,key))
        cout<<"Found";
    else
        cout<<"Not Found";

    return 0;

}