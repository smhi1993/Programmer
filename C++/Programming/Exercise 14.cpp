#include<iostream.h>
#include<ctype.h>
main()
    {
    char c;
    cout<<"Enter a letter :";
    cin>>c;
    c = toupper(c);
    if(c >= 'A' && 'Z')
        cout<<"You entered a letter\n";
    else
        cout<<"Your input was not a letter\n";
    return 0;
    }
