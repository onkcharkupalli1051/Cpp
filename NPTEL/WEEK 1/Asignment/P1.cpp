/*
Consider the following code snippet. Fill in the 
blank at LINE-1 to complete the return statement of 
the function compare. 
Please check sample input and output. 
(lexicographical_compare function returns 1 if the 
first string is lexicographically less than the 
second string)
*/

#include<iostream>
#include<algorithm>
#include<cctype>
#include<string.h>
using namespace std;

bool compare(char c1, char c2){
    return tolower(c1)<tolower(c2);        //LINE-1
}

int main(){
    char arr1[20], arr2[20];
    cin >> arr1;
    cin >> arr2;

    cout << lexicographical_compare(arr1, arr1+strlen(arr1), arr2, arr2+strlen(arr2),
    	                              compare);
    return 0;
}