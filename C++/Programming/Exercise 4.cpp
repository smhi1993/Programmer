#include<iostream.h>
#include<conio.h>
double root(a,b,c);
void main()
    {cout<<"Enter a,b,c="<<endl;
    cin>>a>>b>>c>>endl;
    cout<<a<<"x*x+"<<b<<"x+"<<c<<endl;
    delta=(b*b-4*a*c);
    if (delta>=0)
    {double x,y;
    x=(-b+sqrt(delta))/(2*a);
    y=(-b-sqrt(delta))/(2*a);
    cout<<x<<y<<endl;}
    else
    {delta=-delta
    x=(-b+(i)sqrt(delta))/(2*a);
    y=(-b-(i)sqrt(delta))/(2*a);
    cout<<x<<y<<endl;}
    getch()
    return;}
