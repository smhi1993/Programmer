#include<iostream.h>
void main()
    {long hour , min , sec ;
    long totalsec ;
    cout<<"hour="<<endl ;
    cin>>hour;
    cout<<"min="<<endl ;
    cin>>min ;
    cout<<"sec="<<endl ;
    cin>>sec ;
    totalsec = (hour * 3600 + min * 60 + sec) ;
    cout<<"\n\n"<<totalsec<<"seconds since midnight" ;
    return 0 ;}

