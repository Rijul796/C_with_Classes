#include<iostream>
using namespace std;

int calc(int array[],int a,int b)
{
    int sum=0;
    for (int i =a; i <= b; i++)
    {
        sum=sum+array[i];
    }
    return sum;
    
}

int main()

{
    int array[100];
    int n,x;
    cout<<"enter length of array: ";
    cin>>x;
    cout<<"enter elements of array: ";
    for (int i = 0; i < x; i++)
    {
        cin>>array[i];
    }
    
    cout<<"enter sum you want: ";
    cin>>n;
    for (int i = x-1; i>0; i--)
    {
        for (int j = 0; j < x; j++)
        {
            if(n==calc(array,i,j))
            {
                cout<<"elements from index "<<i<<" to "<<j<<endl;
            }

        }
                
    }
    
    return 0;
}