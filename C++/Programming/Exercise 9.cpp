#include<iostream.h>
#include<math.h>
inline double sqr(double x)
    {
    return x*x;
    }
double distance(double x2,double y2,double x1=0,double y1=0)
    {
    return sqr(x2-x1)+sqr(y2-y1);
    }
main()
    {
    double x1,x2,y1,y2;
    cout<<"Enter x coordinate for point 1:";
    cin>>x1;
    cout<<"Enter y coordinate for point 1:";
    cin>>y1;
    cout<<"Enter x coordinate for point 2:";
    cin>>x2;
    cout<<"Enter y coordinate for point 2:";
    cin>>y2;
    cout<<"distance between points ="<<distance(x1,x2,y1,y2)<<"\n";
    cout<<"distance between point 1 and (0,0) ="<<distance(x1,y1,0)<<"\n";
    cout<<"distance between point 1 and (0,0) ="<<distance(x2,y2)<<"\n";
    return 0;
    }
