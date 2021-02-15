#include<iostream>
using namespace std;

class PrintJobs
{
    int nPages;
    
    public:
        static int nTrayPages;
        static int nJobs;
        PrintJobs(int nP): nPages(nP)
        {
            ++nJobs;
            cout<<"Printing "<<nP<<" pages."<<endl;
            nTrayPages = nTrayPages - nP;
        }
        PrintJobs()
        {
            --nJobs;
        }
};

int PrintJobs::nTrayPages = 100;
int PrintJobs::nJobs = 0;

int main()
{
    cout<<"Jobs : "<<PrintJobs::nJobs<<endl;
    cout<<"Pages : "<<PrintJobs::nTrayPages<<endl;

    PrintJobs job1(10);
    cout<<"Jobs : "<<PrintJobs::nJobs<<endl;
    cout<<"Pages : "<<PrintJobs::nTrayPages<<endl;

    {
        PrintJobs job1(30),job2(20);
        cout<<"Jobs : "<<PrintJobs::nJobs<<endl;
        cout<<"Pages : "<<PrintJobs::nTrayPages<<endl;
        PrintJobs::nTrayPages += 100;
    }

    cout<<"Jobs : "<<PrintJobs::nJobs<<endl;
    cout<<"Pages : "<<PrintJobs::nTrayPages<<endl;
    return 0;
}