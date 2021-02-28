#include<iostream>
using namespace std;

class A{};
class B : public A{};

int main()
{
    A *pa = 0;
    B *pb = 0;
    void *pv = 0;

    //upcast
    //pa = pb;   okay

    //invalid conersion from A* to B*
    //pb = pa;
    
    /*Lose the type
    pv = pa;
    pv = pb;
    */

    /*error cannot convert from void * to class 

    pa = pv;
    pb = pv;
    pc = pv;
    */
    
    return 0;
}