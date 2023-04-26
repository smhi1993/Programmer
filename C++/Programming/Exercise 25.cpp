#include<iostream.h>
#include<ctype.h>
main()
    {
    char ch;
    double x,y;
    for(;;)
        {
        cout<<"\nEnter a number : ";
        cin>>x;
        if(x != 0)
            {
            y = 1 / x;
            cout<<"1 / ("<<x<<") = "<<y<<"\n";
            cout<<"More calculators? (Y/N)";
            cin>>ch;
            ch = toupper(ch);
            if(ch != 'Y')
                break;
            }
        else
            cout<<"Error: cannot accept 0\n";
        return 0;
        }
    }
