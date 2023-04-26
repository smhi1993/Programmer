#include<iostream.h>
main()
    {
    char c;
    cout<<"Enter a letter :";
    cin>>c;
    if(c >= 'A' && c <= 'Z')
        cout<<"You entered an uppercase letter\n";
    else if(c >= 'a' && c <= 'z')
        cout<<"You entered an lowercase letter\n";
    else if(c >= '0' && c <= '9')
        cout<<"You entered a digit\n";
    else
        cout<<"You entered an non-alphanumeric character\n";
    return 0;
    }
