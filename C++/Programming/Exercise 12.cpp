#include<iostream.h>
main()
    {
    int i,j;
    double x,y;
    cout<<"Type first integer :";
    cin>>i;
    cout<<"Type second integer :";
    cin>>j;
    i += j;
    j -=6;
    i *=4;
    j /=3;
    i++;
    j--;
    cout<<"i = "<<i<<"\n";
    cout<<"j = "<<j<<"\n";
    cout<<"Type first real number :";
    cin>>x;
    cout<<"Type second real number :";
    cin>>y;
    x += y;
    y -= 4.0;
    x *= 4.0;
    y /= 3.0;
    x++;
    y--;
    cout<<"x = "<<x<<"\n";
    cout<<"y = "<<y<<"\n";
    return 0;
    }
