#include<iostream.h>
const int MAX-COL = 3;
const int MAX-ROW = 3;
main()
    {
    double x[MAX-ROW][MAX-COL] = {
                                  1,2,3
                                  4,5,6
                                  7,8,9
                                  };
    double sum,sumx,mean;
    int rows = MAX-ROW,columns = MAX-COL;
    cout<<"Matrix is :\n";
    for(int i = 0;i < rows;i++)
        {
        for(int j = 0;j < columns;j++)
            {
            cout.width(4);
            cout.precision(1);
            cout<<x[i][j]<<" ";
            }
        cout<<"\n";
        }
    cout<<"\n";
    sum = rows;
    for(int j = 0;j < columns;j++)
        {
        sumx = 0.0;
        for(i = 0;i < rows;i++)
            sumx += x[i][j];
        mean = sumx / sum;
        cout<<"Mean for column "<<j<<" = "<<mean<<"\n";
        }
    return 0;
    }
