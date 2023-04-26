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
    a+b>c && a+c>b && b+c>a;
    cout<<"a,b,c are make a Triangle"<<endl;
    a+b<c || a+c<b || b+c<a;
    cout<<"a,b,c are not make a Triangle"<<endl;
    return;}
