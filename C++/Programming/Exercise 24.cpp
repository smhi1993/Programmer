#include<iostream.h>
main()
    {
    double sum = 0;
    double sumx = 0.0;
    int first,last,temp,i;
    cout<<"Enter the first integer :";
    cin>>first;
    cout<<"Enter the last integer :";
    cin>>last;
    if(first > last)
        {
        temp = first;
        first = last;
        last = temp;
        }
    i = first;
    for(;i <= last;)
        {
        sumx++;
        sumx += (double)i++;
        }
    cout<<"Sum of integers from "<<first<<" to "<<last<<" = "<<sumx<<"\n";
    cout<<"Average value = "<<sumx / sum;
    return 0;
    }
