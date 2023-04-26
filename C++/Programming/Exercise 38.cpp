#include<iostream.h>
const int MAX-COL = 10;
const int MAX-ROW = 30;
main()
    {
    double x[MAX-ROW][MAX-COL];
    double sum,sumx,mean;
    int rows,columns;
    do{
        cout<<"Enter number of rows [2 to"<<MAX-ROW<<"] : ";
        cin>>rows;
    }while(rows < 2 || rows > MAX-ROW);
    do{
        cout<<"Enter number of columns [2 to"<<MAX-COL<<"] : ";
        cin>>columns;
    }while(columns < 1 || columns > MAX-COL);
    for(int i = 0;i < rows;i++)
        {
        for(int j = 0;j < columns;j++)
            {
            cout<<"x["<<i<<"]["<<j<<"] : ";
            cin>>x[i][j];
            }
        cout<<"\n";
        }
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
