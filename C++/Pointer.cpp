#include<iostream>
using namespace std;
// int main()
// {
//     int x=69;
//     int *p=&x;//pointer to store the address of x
//     cout<<p<<" and "<<&x<<endl;//value stored in pointer p and address of x
//     cout<<*p<<" and "<<&p<<endl;//value in the stored value in pointer and address of ponter
//     int **ptr=&p;//pointer to pointer
//     cout<<ptr<<" and "<<&p<<endl;//value stored in pointer(pointer) and address of pointer p
//     cout<<"value stored in pointer(pointer(variable)) is: "<<*(*ptr)<<" or "<<**ptr<<endl;
//     return 0;
// }


//pointers in array
// int main()
// {
//     int arr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cin>>arr[i];
//     }
//     int *ptr=arr;
//     cout<<"value using pointer are: "<<endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"address is : "<<ptr+i<<" and value is: "<<*(ptr+i)<<endl;
//     }

// }


//new and delete keywords
int main()
{
    int *p=new int(10);//dynamic initialisation
    cout<<"the value of int is: "<<*p<<endl;
    delete p;
    // int *arr=new int [3];
    // arr[0]=1;
    // arr[1]=2;//or *(arr+1)=20;
    // arr[2]=3;
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    // delete[] arr;
}
