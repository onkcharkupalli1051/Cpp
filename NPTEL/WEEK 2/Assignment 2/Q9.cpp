#include<iostream>
using namespace std;

int main()
{
    const int *arr = new int[2]{1,2};
    cout<<*arr<<" "<<*(arr++)<<" "<<*arr+1; //1 1 3
    return 0;
}