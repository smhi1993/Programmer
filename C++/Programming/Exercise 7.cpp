#include<iostream.h>
double mean(double x)
    {static double sum=0;
    static double sumx=0;
    sum = sum + 1;
    sumx = sumx + x;
    return sumx / sum;}
main()
    {cout<< "mean=" << mean(1) << "\n";
    cout<< "mean=" << mean(2) << "\n";
    cout<< "mean=" << mean(4) << "\n";
    cout<< "mean=" << mean(10) << "\n";
    cout<< "mean=" << mean(11) << "\n";
    return 0;}
