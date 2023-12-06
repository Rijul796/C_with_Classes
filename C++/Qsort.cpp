#include<iostream>
using namespace std;

int compare(const void *a,const void *b)
{
    const int *x=(const int *)a;
    const int *y=(const int *)b;
    if (*x<*y)
    {
        return -1;
    }
    else if (*x>*y)
    {
        return 1;
    }
    else{return 0;}
}
int main()
{
    int length;
    cout<<"enter length of array: ";
    cin>>length;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cout<<"enter element for index "<<i<<" ";
        cin>>arr[i];
    }
    qsort(arr,length,sizeof(int),compare);
    cout<<"the sorted array is---"<<endl;
    for (int i = 0; i < length; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}