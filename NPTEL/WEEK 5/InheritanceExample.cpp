#include<iostream>
using namespace std;

class LandLinePhone
{
    PhoneNumber number;
    Name subscriber;
    RingTone rTone;

    public:
        LandLinePhone(const char *num, const char *subs);
        void Call(const PhoneNumber *p);
        void Answer();
        friend ostream& operator<<(ostream& os, const LandLinePhone& p);
};

