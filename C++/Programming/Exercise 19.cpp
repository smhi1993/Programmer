#include<iostream.h>
const int TRUE = 1;
const int FALSE = 0;
main()
    {
    double x , y , z;
    char op;
    int error = FALSE;
    cout<<"Enter the first operand : ";
    cin>>x;
    cout<<"Enter the operator : ";
    cin>>op;
    cout<<"Enter the second operand : ";
    cin>>y;
    switch(op)
    {
    case "+":
        z = x + y;
        break;
    case "-":
        z = x - y;
        break;
    case "*":
        z = x * y;
        break;
    case "/":
        if (y != 0)
            z = x / y;
        else
            error = TRUE;
        break;
    default:
        error = TRUE;
    }
    if(!error)
       cout<<x<<" "<<op<<" "<<y<<" = "<<z<<"\n";
    else
       cout<<"Bad operator or division by zero error\n";
    return 0;
    }
