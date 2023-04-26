#include<iostream.h>
#include<stdio.h>
float area(float r);
float cylndr(float r,float h);
float weight(float r,float h,float d);
main()
    {
    float r,h,d,cl,ar,wt;
    cout<<"\nplease enter r,h,d :";
    cin>>r>>h>>d;
    ar = area(r);
    cl = cylndr(r,h);
    wt = weight(r,h,d);
    cout<<ar<<" "<<cl<<" "<<wt;
    return 0;
    }
float area(float r)
    {
    float a;
    a = 3.1415 * r * r;
    return a;
    }
float cylndr(float r,float h)
    {
    float c,a;
    a = area(r);
    c = a * h;
    return c;
    }
float weight(float r,float h,float d)
    {
    float v,w;
    v = cylndr(r,h);
    w = v * d;
    return w;
    }
