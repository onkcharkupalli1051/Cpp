#include<iostream>
using namespace std;

int main()
{
    int a=5,b=3,c=1;
    int result = c-- && ++b && a--;
    cout<<a<<" "<<b<<" "<<c<<" "<<result;
    return 0;
}

/*
Concept of short circuiting : 
In the or (||) evaluation, if the first expression is 1,
then the other expression will not be evaluated.
eg. 
int result = c-- && ++b && a--;

here, c is initially 1, and it is post, hence the c is
still 1 and it will be zero after ;
therefore ++b will also be evaluated to 4 and a-- will 
be 5 in the expression but after ; a will be 4.
Here, it is and expression evaluation, therfore short 
circuiting will not be evaluated.

In the and && evaluation, if first value is zero, then
the remaining values/expression will not be evaluated
*/
