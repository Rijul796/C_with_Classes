#include<iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int n;

    // Get the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Get array elements from the user
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Perform selection sort
    selectionSort(arr, n);

    // Display the sorted array
    cout << "\nSorted array:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}



// #include <iostream>

// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n-1; ++i) {
//         for (int j = 0; j < n-i-1; ++j) {
//             if (arr[j] > arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

// int main() {
//     int n;

//     // Get the size of the array
//     std::cout << "Enter the number of elements in the array: ";
//     std::cin >> n;

//     int arr[n];

//     // Get array elements from the user
//     std::cout << "Enter the elements of the array:\n";
//     for (int i = 0; i < n; ++i) {
//         std::cout << "Enter element " << i+1 << ": ";
//         std::cin >> arr[i];
//     }

//     // Perform Bubble Sort
//     bubbleSort(arr, n);

//     // Display the sorted array
//     std::cout << "\nSorted array using Bubble Sort: ";
//     for (int i = 0; i < n; ++i) {
//         std::cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>

// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; ++i) {
//         int key = arr[i];
//         int j = i - 1;

//         // Move elements of arr[0..i-1] that are greater than key
//         // to one position ahead of their current position
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             --j;
//         }
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int n;

//     // Get the number of elements in the array
//     std::cout << "Enter the number of elements: ";
//     std::cin >> n;

//     int arr[n];

//     // Get array elements from the user
//     std::cout << "Enter the elements:\n";
//     for (int i = 0; i < n; ++i) {
//         std::cout << "Element " << i + 1 << ": ";
//         std::cin >> arr[i];
//     }

//     // Perform insertion sort
//     insertionSort(arr, n);

//     // Display the sorted array
//     std::cout << "\nSorted array:\n";
//     for (int i = 0; i < n; ++i) {
//         std::cout << arr[i] << " ";
//     }

//     return 0;
// }

