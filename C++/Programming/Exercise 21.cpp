#include<iostream.h>
#include<math.h>
double factorial(int i)
    {
    if(i > -1)
        switch(i)
            {
            case 0:
            case 1:
                return 1;
                break;
            case 2:
                return 2;
                break;
            case 3:
                return 6;
                break;
            case 4:
                return 24;
                break;
            default:
                return double(i) * factorial(i - 1);
            }
    else
            return -1.0e+30;
    }
