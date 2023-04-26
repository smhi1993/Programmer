#include<iostream.h>
main()
    {
    int item[100)];
    int a,b,t;
    int count;
    cout<<"How many numbers? (2 to 100):";
    cin>>count;
    cout<<"Enter numbers now:";
    for(a = 0;a < count;a++) cin>>item[a];
    for(a = 1;a < count;++a)
        for(b = count - 1;b >= a;--b)
            {
            if(item[b - 1] > item[b])
                {
                t = item[b - 1];
                item[b - 1] = item[b];
                item[b] = t;
                }
            }
    for(t = 0;t < count;t++) cout<<item[t]<<"";
    return 0;
    }
