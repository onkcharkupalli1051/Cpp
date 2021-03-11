#include<iostream>
using namespace std;

int main()
{
    //buffer on stack
    unsigned char buf[sizeof(int)*2];;

    //placement new in buffer buf
    int *pInt = new (buf) int (3);
    int *qInt = new (buf+sizeof(int))int(5);

    int *pBuf = (int*)(buf+0);
    int *qBuf = (int*)(buf+sizeof(int));
    cout<<"Buf Addr  Int Addr"<<endl;
    cout<<pBuf<<"  "<<pInt<<endl<<qBuf<<"  "<<qInt<<endl;

    cout<<endl;
    cout<<"1st Int  2nd Int"<<endl;
    cout<<*pBuf<<"         "<<*qBuf<<endl;

    int *rInt = new int(7);     //heap allocation
    cout<<"Heap Addr    3rd Int"<<endl;
    cout<<rInt<<"    "<<*rInt<<endl;
    delete rInt;                //delete integer from heap

    //No delete for placement new
    return 0;
}