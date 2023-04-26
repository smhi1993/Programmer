#include<iostream.h>
void inc(int& i,int diff = 1)
    {
    i = i+diff;
    }
void inc(double& x,double diff = 1)
    {
    x = x+diff;
    }
void inc(char& c,int diff = 1)
    {
    c = c+diff;
    }
main()
    {
    char * c = "A";
    int i = 10;
    double x = 10.2;
    cout<<"c = "<<c<<"\n"<<"i = "<<i<<"\n"<<"x = "<<x<<"\n";
    return 0;
    }
