#include<iostream>
using namespace std;

int main()

{
    int array[100][100];
    int size;
    cout<<"enter the size of 2 d array: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin>>array[i][j];
        }
        
    }
    cout<<"the array is:  "<<endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}