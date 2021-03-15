#include<iostream>
using namespace std;

class Point
{
    int x,y;

    public:
        Point(int x_, int y_):  x(x_),y(y_)
        {
            cout<<"Point ctor";
            print();
            cout<<endl;
        }

        Point(const Point& p): x(p.x), y(p.y)
        {
            cout<<"Point ctor";
            print();
            cout<<endl;
        }

        Point(): x(0),y(0)
        {
            cout<<"Point ctor";
            print();
            cout<<endl;
        }
        
        ~Point()
        {
            cout<<"Point dtor";
            print();
            cout<<endl;
        }
        
        void print()
        {
            cout<<"("<<x<<", "<<y<<")";
        }
};

class Rect
{
    Point TL, BR;

    public:
        Rect(int tlx,int tly, int brx, int bry): TL(tlx,tly), BR(brx,bry)
        {
            cout<<"Rect ctor : ";
            print();
            cout<<endl;
        }

        Rect()
        {
            cout<<"Rect ctor : ";
            print();
            cout<<endl;
        }

        Rect(const Point& p_tl, const Point& p_br):
        TL(p_tl), BR(p_br)
        {
            cout<<"Rect ctor : ";
            print();
            cout<<endl;
        }

        Rect(const Point& p_tl, int brx, int bry):
        TL(p_tl), BR(brx,bry)
        {
            cout<<"Rect ctor : ";
            print();
            cout<<endl;
        }

        Rect(const Rect& r) : TL(r.TL), BR(r.BR)
        {
            cout<<"Rect ctor : ";
            print();
            cout<<endl;
        }

        ~Rect()
        {
            cout<<"Rect dtor : ";
            print();
            cout<<endl;
        }

        void print()
        {
            cout<<"[";
            TL.print();
            cout<<" ";
            BR.print();
            cout<<"]";
        }
};

int main()
{
    Rect r1(0,2,5,7);

    Rect r2(Point(3,5), Point(6,9));

    Rect r3(Point(2,2),6,4);

    Rect r4;
    return 0;
}