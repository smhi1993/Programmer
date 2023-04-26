#include<iostream.h>
const int FIRST = 11;
const int LAST = 121;
main()
    {
    double sum = 0;
    int i = FIRST;
    while(i <= LAST)
        {
        sum += double(i * i++);
        }
    cout<<"Sum of squared odd integers from "<<FIRST<<" to "<<LAST<<" = "<<sum<<"\n";
    return 0;
    }
