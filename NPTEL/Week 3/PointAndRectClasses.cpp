#include<iostream>
using namespace std;

class Point
{
    int x;
    int y;

    public:
        Point(int _x, int _y): x(_x), y(_y) 
        {
            cout<<"point ctor : ";
            print();
            cout<<endl;
        }
        ~Point() {cout<<"Point dtor : ";
        print();
        cout<<endl;}
        void print()
        {
            cout<<"("<<x<<","<<y<<")";
        }
};

class Rectangle
{
    Point TL;
    Point BR;

    public:
        Rectangle(int tlx, int tly, int brx, int bry): TL(tlx, tly), BR(brx, bry) 
        {
            cout<<"Rect CTOR : ";
            print();
            cout<<endl;
        }
        ~Rectangle() {}
        void print()
        {
            cout<<"(";
            TL.print();
            cout<<" ";
            BR.print();
            cout<<")";
        }
};

int main()
{
    Rectangle r(0,2,5,7);
    cout<<endl;
    r.print();
    cout<<endl;
    return 0;
}