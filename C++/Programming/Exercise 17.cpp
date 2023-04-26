#include<iostream.h>
main()
    {
    char c;
    cout<<"Enter a letter :";
    cin>>c;
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        if(c >= 'A' && c <= 'Z')
            cout<<"You entered an uppercase letter\n";
    else
            cout<<"You entered an lowercase letter\n";
    else
            cout<<"You entered an non-letter character\n";
    return 0;
    }
