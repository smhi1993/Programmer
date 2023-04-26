#include<iostream.h>
const int MAX = 10;
const int TRUE = 1;
const int FALSE = 0;
const int NOT_FOUND = -1;
int obtainNumData()
    {
    int m;
    do{
        cout<<"Enter number of data points [2 to "<<MAX<<"] :";
        cin>>m;
        cout<<"\n";
    }while(m < 2 || m > MAX);
    return m;
    }
void inputArray(int intArr[],int n)
    {
    for(int i = 0;i < n;i++)
        {
        cout<<"arr["<<i<<"] :";
        cin>>intArr[i];
        }
    }
void showArray(int intArr[],int n)
    {
    for(int i = 0;i < n;i++)
        {
        cout.width(5);
        cout<<intArr[i]<<" ";
        }
    cout<<"\n";
    }
void sortArray(int intArr[],int n)
    {
    int offset,temp,inOrder;
    offset = n;
    do{
        offset = (8 * offset) / 11;
        offset = (offset == 0) ? 1 : offset;
        inOrder = TRUE;
        for(int i =0,j = offset;i < (n - offset);i++;j++)
            {
            if(intArr[i] > intArr[j])
                {
                inOrder = FALSE;
                temp = intArr[i];
                intArr[i] = intArr[j];
                intArr[j] = temp;
                }
            }
    }while(!(offset = 1 && inOrder == TRUE));
    }
int linearSearch(int searchVal,int intArr[],int n)
    {
    int notFound = TRUE;
    int i = 0;
    while(i < n && notFound)
        if(searchVal != intArr[i])
            i++;
        else
            notFound = FALSE;
        return (notFound == FALSE) ? i : NOT_FOUND;
    }
int binarySearch(int searchVal, int intArr[],int n)
    {
    int median,low,high;
    low = 0;
    high = n - 1;
    do{
        median = (low + high) / 2;
        if(searchVal < intArr[median])
            low = median + 1;
        else
            high = median + 1;
    }while(!(searchVal == intArr[median] || low > high));
    return(searchVal == intArr[median]) ? median : NOT_FOUND;
    }
void searchInUnorderedArray(int intArr[],int n)
    {
    int x,i;
    char c;
    cout<<"Search in unordered array? (Y/N) ";
    cin>>c;
    while(c == 'Y' || c == 'y')
        {
        cout<<"Enter search value : ";
        cin>>x;
        i = linearSearch(x,intArr,n)
        if(i != NOT_FOUND)
            cout<<"Found matching element at index "<<i<<"\n";
        else
            cout<<"No match found\n";
        cout<<"Search in unordered array? (Y/N)";
        cin>>c;
        }
    }
void searchInSortedArray(int intArr[],int n)
    {
    int x,i;
    char c;
    cout<<"Search in sorted array? (Y/N) ";
    cin>>c;
    while(c == 'Y' || c == 'y')
        {
        cout<<"Enter search value : " ;
        cin>>x;
        i = binarySearch(x,intArr,n);
        if(i != NOT_FOUND)
            cout<<"Found matching element at index "<<i<<"\n";
        else
            cout<<"No match found\n";
        cout<<"Search in sorted array? (Y/N)";
        cin>>c;
        }
    }
main()
    {
    int arr[MAX];
    int n;
    n = obtainNumData();
    inputArray(arr,n);
    showArray(arr,n);
    searchInUnorderedArray(arr,n);
    sortArray(arr,n);
    cout<<"\nSorted array is:\n";
    showArray(arr,n);
    searchInSortedArray(arr,n);
    return 0;
    }
