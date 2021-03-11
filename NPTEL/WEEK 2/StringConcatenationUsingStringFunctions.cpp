//StringConcatenationUsingStringFunctions.cpp

#include<iostream>
#include<cstring>
using namespace std;

typedef struct _String
{
    char *s;
}String;

int main()
{
    String a,b,c;
    a.s = strdup("Onkar ");
    b.s = strdup("C.");

    c.s = (char*)malloc(strlen(a.s)+strlen(b.s)+1);

    strcpy(c.s,a.s);
    strcat(c.s,b.s);

    cout<<"Fname : "<<a.s;
    cout<<"\nLname : "<<b.s;
    cout<<"\nFull Name : "<<c.s;
    return 0;
}