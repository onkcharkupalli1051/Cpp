#include<iostream>
#include<string.h>
using namespace std;

int compare(char *s1, char *s2, int n){
    for(int i=0;i<n;i++)      //LINE-1
    {
        if(s1[i] !=  s2[i])
        {
            if((int*)s1[i] < (int*)s1[i])
                return -1;
            else if((int*)s1[i] > (int*)s1[i])
                return 1;
        }
    }
    return 0;
}

int main()
{
    char s1[20], s2[20];
    int n,r;
    cin >> s1 >> s2 >> n;
    r = compare(s1,s2,n);
    if(r>0)
        cout << s1;
    else if(r<0)
        cout << s2;
    else
        cout << "equal";
    return 0;
}
