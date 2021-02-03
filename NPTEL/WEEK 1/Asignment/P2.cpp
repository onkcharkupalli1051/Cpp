/*
Consider the following program and fill the blank 
at LINE-1 to complete function pointer declaration
 and at LINE-2 to call the function pointer such 
 that it satisfies the sample input and output.
*/

#include<iostream>
using namespace std;

void andop(int a, int b){
    cout << (a&b);
}

void orop(int a, int b){
    cout << (a|b);
}

void xorop(int a, int b){
    cout << (a^b);
}

void (*fun_ptr[])(int, int) = 
  orop(a,b); //LINE-1

void caller(int ch, int a, int b){
    if(ch<=2)
        fun_ptr[](a,b); //LINE-2
}

int main(){
    int ch, a, b;
    cin >> ch >> a >> b;
    caller(ch,a,b);
    return 0;
}