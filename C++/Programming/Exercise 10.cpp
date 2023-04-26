#include<iostream.h>
void inc(int& i)
    {
    i = i+1;
    }

void inc(double& x)
    {
    x = x+1;
    }
void inc(char& c)
    {
    c = c+1;
    }
main()
    {
    char * c = "A";
    int i = 10;
    double x = 10.2;
    cout<<"After using the overlaoded inc founction\n";
    cout<<"c = "<<c<<"\n"<<"i = "<<i<<"\n"<<"x = "<<x<<"\n";
    return 0;
    }
