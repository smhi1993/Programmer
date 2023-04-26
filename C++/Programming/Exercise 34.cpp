#include<iostream.h>
main()
    {
    double x[MAX];
    double sum,sumx = 0.0,mean;
    int i,n;
    do{
        cout<<"Enter number of data points [2 to"<<MAX<<"] : ";
        cin>>n;
        cout<<"\n";
    }while(n < 2 || n > MAX);
    for(i = 0;i < n;i++)
        {
        cout<<"x["<<i<<"] : ";
        }
    sum = n;
    for(i = 0;i < n;i++)
        sumx += x[i];
    mean = sumx / sum;
    cout<<"\nMean = "<<mean<<"\n\n";
    return 0;
    }
