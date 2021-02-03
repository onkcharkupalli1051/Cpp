#include<iostream>
using namespace std;

struct point
{
    int x;
    int y;
    struct point nextPoint;
};

int main()
{
    point p1;
    p1.x = 1;
    p1.y = 2;
    p1.nextPoint = p1;
    cout<<p1.nextPoint.x;   //1
    return 0;
}