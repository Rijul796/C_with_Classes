#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// int reverseNumber(int num) {
//     int reversedNum = 0;

//     while (num != 0) {
//         int digit = num % 10;
//         reversedNum = reversedNum * 10 + digit;
//         num /= 10;
//     }

//     return reversedNum;
// }
// int main()
// {
//     int arr[]={10,24,76,37,13};
//     int n,count=0;
//     n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if ((arr[j]+reverseNumber(arr[i]))==(arr[i]+reverseNumber(arr[j])))
//             {
//                 count++;
//             }
            
//         }
        
//     }
//     cout<<"number of pairs are: "<<count;

//     return 0;
// }

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int arr[] = {10, 24, 76, 35, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    int arr1[n];
    for (int i = 0; i < n; i++) {
        arr1[i] = (arr[i] - reverseNumber(arr[i]));
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && arr1[i] == arr1[j]) {
                count++;
            }
        }
    }
    count /= 2;

    cout << "Number of pairs are: " << count << endl;

    return 0;
}