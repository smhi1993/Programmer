#include<iostream.h>
double f(double x)
    {return x * x - 5 * x + 10}
double slope(double x)
    {double f1 , f2 , h = 0.01 * x ;
    f1 = f(x + h) ;
    f2 = f(x - h) ;
    return (f1 - f2)/(2h)}
main()
    {double x = 3.5 ;
    cout<<"f("<<x<<")"<<slope (x)<<"\n" ;
    return 0 ;}
