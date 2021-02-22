#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char st[] = "Test";
    int len = strlen(st);

    for(int i=0; i<len; i++)
    {
        cout<<st[i]<<i[st]<<*(st+i)<<*(i+st)<<endl;
    }

    int lm = len/2;
    len--;

    for(int i=0; i<lm; i++)
    {
        st[i] = st[i] + st[len-i];
        cout<<st<<" ";
        st[len-i] = st[i] - st[len-i];
        cout<<st<<" ";
        st[i] = st[i] + st[len-i];
        cout<<st<<" "<<endl;;
    }

    cout<<"String : "<<st;
    return 0;
}