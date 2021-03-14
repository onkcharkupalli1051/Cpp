#include<iostream>
using namespace std;

class Point
{
    public:
        double x,y;
};

class Rectangle
{
    public:
        Point TL, BR;

        void computearea()
        {
            cout<<abs(TL.x - BR.x)*(BR.y - TL.y);
        }
};

int main()
{
    Rectangle r = { {0,2}, {5,7} };
    r.computearea();
    return 0;
}