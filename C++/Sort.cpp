#include <iostream>
using namespace std;
int main()
{
    int n;
    printf("enter length of array :");
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter element for index" << i << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            // for des
            //  if(arr[j+1]>arr[j]){
            //      int temp=arr[j];
            //      arr[j]=arr[j+1];
            //      arr[j+1]=temp;
            //  }

            // for asc
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "element at index" << i << " is " << arr[i] << endl;
    }

    return 0;
}