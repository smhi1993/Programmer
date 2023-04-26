#include<iostream.h>
#include<stdlib.h>
#include<math.h>
void summat(float x[][10],float y[][10],float z[][10],int m,int n);
main()
    {
    float a[10][10].b[10][10].c[10][10];
    int i,j,m = 3,n = 3;
    for(i = 0;i < m;i++)
        {
        for(j = 0;j < n;j++)
            {
            cin>>a[i][j];
            }
        }
    for(i = 0;i < m;i++)
        {
        for(j = 0;j < n;j++)
            {
            cin>>b[i][j];
            }
    summat(a,b,c,m,n)
    for(i = 0;i < m;i++)
        {
        for(j = 0;j < n;j++)
            {
            cout<<" "<<c[i][j];
            }
    cout<<"\n";
        }
    return 1;
        }
    void summat(float x[][10],float y[][10],float z[][10],int m,int n)
        {
        int i,j;
        for(i = 0;i < m;i++)
            {
            for(j = 0;j < n;j++)
                {
                z[i][j] = x[i][j] + y[i][j];
                }
            }
        }
    return;
    }
