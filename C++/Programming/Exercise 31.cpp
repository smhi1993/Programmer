#include<iostream.h>
const int FIRST = 11;
const int LAST = 121;
main()
    {
    double sum = 0;
    for(int i = FIRST;i <= LAST;i += 2)
        sum += (double)i;
    cout<<"Sum of odd integers from "<<FIRST<<" to "<<LAST<<" = "<<sum<<"\n";
    return 0;
    }
