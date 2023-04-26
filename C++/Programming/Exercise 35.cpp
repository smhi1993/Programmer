#include<iostream.h>
const int MAX = 10;
main()
    {
    double x[MAX] = {12,2,45,4, 67.2,12.2,34.6,87.4,83.6,12.3,14.8,55.5};
    double sum = MAX,sumx = 0.0,mean;
    int n = MAX;
    cout<<"Array is:\n";
    for(int i = 0;i < n;i++)
        {
        sumx += x[i];
        cout<<"x["<<i<<"] = "<<x[i]<<"\n";
        }
    mean = sumx / sum;
    cout<<"\nMean = "<<mean<<"\n\n";
    return 0;
    }
