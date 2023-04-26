#include<iostream.h>
main()
    {
    short int aShort;
    int anInt;
    long aLong;
    float aReal;
    char aChar;
    cout<<"Table 1. Data sizes using sizeof(variable)\n\n";
    cout<<"     Data type       Memory used\n";
    cout<<"                         (bytes)\n";
    cout<<"------------------   -------------";
    cout<<"\n   short int                 "<<sizeof(aShort);
    cout<<"\n    integer                  "<<sizeof(anInt);
    cout<<"\n  long integer               "<<sizeof(aLong);
    cout<<"\n   character                 "<<sizeof(aChar);
    cout<<"\n     float                   "<<sizeof(aReal);
    cout<<"\n\n\n\n";
    cout<<"Table 2. Data sizes using sizeof(dataType)\n\n";
    cout<<"     Data type       Memory used\n";
    cout<<"                         (bytes)\n";
    cout<<"------------------   -------------";
    cout<<"\n   short int                 "<<sizeof(short int);
    cout<<"\n    integer                  "<<sizeof(int);
    cout<<"\n  long integer               "<<sizeof(long);
    cout<<"\n   character                 "<<sizeof(char);
    cout<<"\n     float                   "<<sizeof(float);
    cout<<"\n\n\n\n";
    return 0;
    }
