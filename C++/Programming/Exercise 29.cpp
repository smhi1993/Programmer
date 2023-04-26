#include<iostream.h>
const int FIRST = 11;
const int LAST = 121;
main()
    {
    double sum = 0;
    int i = FIRST;
    do{
        sum += double(i * i++);
    }while(i <= LAST);
    cout<<"Sum of squared odd integer from "<<FIRST<<" to "<<LAST<<" = "<<sum<<"\n";
    return 0;
    }
