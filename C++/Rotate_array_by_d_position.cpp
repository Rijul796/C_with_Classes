// Function to reverse an array

#include<iostream>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to left rotate the array by d positions
void leftRotate(int arr[], int n, int d)
{
    // Handle the case where d is greater than n
    d = d % n;

    // Reverse the first d elements
    reverseArray(arr, 0, d - 1);

    // Reverse the remaining elements
    reverseArray(arr, d, n - 1);

    // Reverse the whole array
    reverseArray(arr, 0, n - 1);
}

int main()
{
    int n, d;

    // Input for array size and rotation count
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << "Enter the number of positions to rotate to the left: ";
    cin >> d;

    // Rotate the array
    leftRotate(arr, n, d);

    // Display the rotated array
    cout << "Rotated Array:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}