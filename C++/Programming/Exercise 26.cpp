#include<iostream.h>
const double TOLERANCE = 1.0e-7;
double abs(double x)
    {
    return (x >= 0) ? x : -x;
    }
double sqroot(double x)
    {
    double guess = x / 2;
    do{
        guess = (guess + x / guess) / 2;
    }while(abs(guess * guess - x) > TOLERANCE);
    return guess;
    }
double getnumber()
    {
    double x;
    do{
       cout<<"Enter a number :";
       cin>>x;
    }while(x < 0);
    return x;
    }
main()
    {
    char c;
    double x,y;
    do{
        x = getnumber();
        y = sqroot(x);
        cout<<"Sqrt("<<x<<") = "<<y<<"\n"<<"Enter another number? (Y/N)";
        cin>>c;
        cout<<"\n";
    }while(c == 'Y' || c == 'y');
    return 0;
    }

