//Which line will be succesfully compiled
#include<iostream>
using namespace std;

void fun(int a){ }
void fun(int a, int b=0){}
void fun(int a=0,int b=0,int c=0){}

int main()
{
    fun();          //succesfully
    fun(10);
    fun(10,20);
    fun(10,20,30);//succesfully
    return 0;
}