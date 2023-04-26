#include<iostream.h>
#include<math.h>
double f(double x)
    {
    return sqrt(x * x - 9);
    }
main()
    {
    double x,y;
    cout<<"       x";
    cout<<"          f(x)\n";
    cout<<"------------------------------\n\n";
    for(int i = -10;i <= 10;i++)
        {
         continue;
        x = (double)i;
        y = f(x);
        cout<<"       ";
        cout.width(3);
        cout<<x<<"         ";
        cout.width(7);
        cout<<y<<"\n";
        }
    return 0;
    }
