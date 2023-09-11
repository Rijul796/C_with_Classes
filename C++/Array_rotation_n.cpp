#include <iostream>
using namespace std;

int main()

{
    int array[100];
    int n, x, temp;
    cout << "enter length of array: ";
    cin >> n;
    cout << "enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "enter no of elements you want to shift: ";
    cin >> x;
    for (int j = 0; j < x; j++)
    {
        temp = array[0];

        for (int i = 0; i < n - 1; i++)
        {
            array[i] = array[i + 1];
        }

        array[n - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}