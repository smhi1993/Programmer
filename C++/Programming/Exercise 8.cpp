#include<iostream.h>
inline double sqr(double x)
    {
       return x*x;
    }
inline double cube(double x)
    {
        return x*x*x;
    }
main()
    {
        double x;
        cout<<"Enter a number:";
        cin>>x;
        cout<<"square of "<<x<<"="<<sqr(x)<<"\n"
             <<"cube of "<<x<<"="<<cube(x)<<"\n";
        return 0;
    }
