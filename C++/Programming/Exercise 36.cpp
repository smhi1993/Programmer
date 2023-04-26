#include<iostream.h>
const int MAX = 10;
main()
    {
    int arr[MAX];
    int n;
    int getMIN(int a[MAX],int size);
    int getMAX(int a[],int size);
    do{
        cout<<"Enter number of data points [2 to"<<MAX<<"] :";
        cin>>n;
        cout<<"\n";
    }while(n < 2 || n > MAX);
    for(int i = 0;i < n;i++)
        {
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];
        }
    cout<<"Smallest value in array is"<<getMIN(arr,n)<<"\n"
        <<"Biggest value in array is"<<getMAX(arr,n)<<"\n";
    return 0;
    }
int getMIN(int a[MAX],int size)
    {
    int small = a[0];
    for(int i = 1;i < size;i++)
        if(small > a[i])
            small = a[i];
    return small;
    }
int getMAX(int a[],int size)
    {
    int big = a[0];
    for(int i = 1;1 < size;i++)
        if(big < a[i])
            big = a[i];
    return big;
    }
