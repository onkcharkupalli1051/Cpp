#include<iostream>

int main()
{
    int a,b;
    std::cout<<"Input two numbers : \n";
    std::cin>>a>>b;

    int sum = a + b;

    std::cout<<"\nSum of "<<a<<" and "<<b<<" : "<<sum<<std::endl;
    return 0;
}