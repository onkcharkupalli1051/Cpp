#include<iostream>
using namespace std;

class Printer
{
    bool blackandwhite;
    bool bothsided;

    Printer(bool bw = false, bool bs = false):
    blackandwhite(bw), bothsided(bs)
    {
        cout<<"Printer constructed "<<endl;
    }                                     //private Printer cannot be constructed
    static Printer *myPrinter;            //Instance of Singleton Printer

    public:
        ~Printer()
        {
            cout<<"Printer destructed"<<endl;
        }

        static const Printer& printer(bool bw = false, bool bs = false)
        {
            //Access the Printer
            if(!myPrinter)
            {
                myPrinter = new Printer(bw,bs);
            }
            return *myPrinter;
        }
        void print(int nP) const {cout<<"Printing "<<nP<<" pages"<<endl;}
};

Printer *Printer::myPrinter = 0;

int main()
{
    Printer::printer().print(10);
    Printer::printer().print(20);

    Printer::printer().~Printer();
    return 0;
}