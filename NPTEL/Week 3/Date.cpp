#include<iostream>
using namespace std;

char monthName[][4] = {"Jan","Feb","Mar","Apr","May","Jun",
                        "July","Aug","Sept","Oct","Nov","Dec"};

char dayname[][10] = {"Monday","Tuesday","Wednesday","Thursday","Friday",
                        "Saturday","Sunday"};

class Date{
    enum Month {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov,
                    Dec};
    enum Day = {Mon, Tue, Wed, Thu, Fri, Sat, Sun};
    typedef unsigned int UINT;
    UINT date_;
    Month month_;
    UINT year_;

    public:
        Date(UINT d,UINT m,UINT y) : date_(d). month_(m), year_(y) {}
        ~Date() {}
        void print() {cout<<date_<<"/"<<monthName[month_-1]<<"/"<<year<<endl;}
        bool ValidDate() {}
        Day day() {}    
};

int main()
{
    Date d(30,7,1961);
    d.print();
    return 0;
}