#include<iostream.h>
#include<math.h>
void main()
    {double a,b,c;
    cout<<"Enter a="<<endl;
    cin>>a;
    cout<<"Enter b="<<endl;
    cin>>b;
    cout<<"Enter c="<<endl;
    cin>>c;
    cout<<a<<"*x*x+"<<b<<"*x+"<<c<<endl;
    double x,y;
    x=(-b+sqrt(b*b-4*a*c))/(2*a);
    y=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<x<<endl;
    cout<<y<<endl;
    return;}
