// #include <iostream>
// using namespace std;

// int main()
// {
//     int array[100];
//     int x;
//     cout << "enter length of array: ";
//     cin >> x;
//     cout << "enter elements of array: ";
//     for (int i = 0; i < x; i++)
//     {
//         cin >> array[i];
//     }

//     int rep[100];
//     int nonrep[100];
//     int repCount = 0, nonrepCount = 0;

//     for (int i = 0; i < x; i++)
//     {
//         bool isRepeated = false;

//         for (int j = 0; j < i; j++)
//         {
//             if (array[i] == array[j])
//             {
//                 isRepeated = true;
//                 break;
//             }
//         }

//         if (isRepeated)
//         {
//             rep[repCount++] = array[i];
//         }
//         else
//         {
//             nonrep[nonrepCount++] = array[i];
//         }
//     }

//     cout << "repeated elements are: ";
//     for (int i = 0; i < repCount; i++)
//     {
//         cout << rep[i] << " ";
//     }
//     cout << endl;

//     cout << "non-repeated elements are: ";
//     for (int i = 0; i < nonrepCount; i++)
//     {
//         cout << nonrep[i] << " ";
//     }
//     cout << endl;

//     cout << "no of repeated elements is: " << repCount << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int arr2[100] = {0};
    for (int i = 0; i < n; ++i)
    {
        arr2[arr[i]]++;
    }

    cout << "Repeated elements: ";
    for (int i = 0; i < n; ++i)
    {
        if (arr2[arr[i]] > 1)
        {
            cout << arr[i] << " ";
            arr2[arr[i]] = 0;
        }
    }
    cout << endl;

    cout << "Non-repeated elements: ";
    for (int i = 0; i < n; ++i)
    {
        if (arr2[arr[i]] == 1)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}