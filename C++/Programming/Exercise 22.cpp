#include<iostream.h>
#include<math.h>
double Fibonacci1(int n)
    {
    double Fib0 = 0;
    double Fib1 = 1;
    double Fib2;
    if(n == 0)
        return 0;
    else if(n == 1 || n == 2)
        return 1;
    else
        for(int i = 0;i <= n;i++)
        {
        Fib2 = Fib0 + Fib1;
        Fib0 = Fib1;
        Fib1 = Fib2;
        }
        return Fib2;
    }
double Fibonacci2(int n)
    {
    if(n ==0)
        return 0;
    else if(n == 1 || n == 2)
        return 1;
    else
        return Fibonacci2(n - 1) + Fibonacci2(n - 2);
    }
