#include<iostream.h>
#include<stdio.h>
const double TOLERANCE = 1.0e-7;
const int MIN-NUM = 1;
const int MAX-NUM = 10;
double abs(double x)
    return (x >= 0)? x : -x;
main()
    {
    double x,sqrt;
    printf("   x        sqrt(x)\n");
    printf("_____________________\n\n");
    for(int i = MIN-NUM;i <= MAX-NUM;i++)
        {
        x = (double)i;
        sqrt = x / 2;
        do{
            sqrt = (sqrt + x / sqrt) / 2;
        }while(abs(sqrt * sqrt - x) > TOLERANCE);
        printf("%4.1f       %8.61f\n",x,sqrt);
        }
    return 0;
    }
