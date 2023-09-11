#include <stdio.h>
// Function to sort the numbers using pointers
void sort(int n, int* ptr)
{
	int i, j, t;

	// Sort the numbers using pointers
	for (i = 0; i < n; i++) {

		for (j = i + 1; j < n; j++) {

			if (*(ptr + j) < *(ptr + i)) {

				t = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = t;
			}
		}
	}
	// print the numbers
	for (i = 0; i < n; i++)
		printf("%d ", *(ptr + i));
}
// Driver code
int main()
{
	int n =5;
	int arr[] = { 0, 23, 14, 12, 9 };
    // n=sizeof(arr)/sizeof(arr[0]);
	sort(n, arr);
	return 0;
}
/*
#include<iostream>
using namespace std;
void swap(int &x,int &n);

int main()

{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter element for index "<<i<<":  ";
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n-i; j++)
        {
            if (arr[j-1]>arr[j])
            {
                swap(arr[j-1],arr[j]);
            }
            
        }
        
    }
    
        for (int i = 0; i < n; i++)
    {
        cout<<"element at index "<<i<<" is: "<<arr[i]<<endl;
    }

    return 0;
}
void swap(int &x,int &n)
{
    int temp;
    temp=x;
    x=n;
    n=temp;
}*/