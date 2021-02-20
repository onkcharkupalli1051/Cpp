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

/*
class MobilePhone
{
    PhoneNumber number;
    Name subscriber;
    RingTone rTone;
    AddressBook aBook;
    PhoneNumber *lastdial;
    void SetLastDialed(const PhoneNumber& p);
    void ShowNumber();

    public:
        MobilePhone(const char *num, const char *subs);
        void Call(PhoneNumber *p);
        void Call(const Name& n);
        
        void Answer();

        void ReDial();
        void SetRingTone(RingTone::RINGTONE r);
        void AddContact(const char *num =0, const char *subs = 0);

        friend ostream& operator<<(ostream& os, const MobilePhone& p);
};
*/
class MobilePhone : public LandLinePhone
{
    protected:
        AddressBook aBook;
        PhoneNumber *lastdial;
        void SetLastDialed(const PhoneNumber& p);
        void ShowNumber();
    public:
        MobilePhone(const char *num, const char *subs):LandLinePhone(num,subs),lastdial(0){}
        void Call(PhoneNumber *p);
        void Call(const Name& n);
        
        //void Answer();

        void ReDial();
        void SetRingTone(RingTone::RINGTONE r);
        void AddContact(const char *num =0, const char *subs = 0);
        friend ostream& operator<<(ostream& os, const MobilePhone& p);
};
class SmartPhone
{
    protected:
        PhoneNumber number;
        Name subscriber;
        RingTone rTone;
        AddressBook aBook;
        PhoneNumber *lastdial;
        void SetLastDialed(const PhoneNumber& p);
        void ShowNumber();
        unsigned int size;
        void DisplayPhoto();

    public:
        SmartPhone(const char *num, const char *subs);
        void Call(PhoneNumber *p);
        void Call(const Name& n);

        void Answer();

        void ReDial();
        void SetRingTone(RingTone::RINGTONE r);
        void AddContact(const char *num = 0, const char *subs=0);
        friend ostream& operator<<(ostream& os, const MobilePhone& p);
}

class SmartPhone: public MobilePhone
{
    protected:
        unsigned int size;
        void DisplayPhoto();

    public:
        MobilePhone(num,subs), lastdial
}   