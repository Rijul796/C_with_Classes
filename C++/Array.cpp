#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int main()
// {
//     int arr[100],odd[100],even[100];
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int count=0,count1=0;
//     for (int i = 0; i < n; i++)
//     {

//         if (arr[i]&1)//it is same as if arr[i]%2==0
//         {
//             odd[count++]=arr[i];
//         }
//         else
//         even[count1++]=arr[i];
//     }
//     cout<<"array of odd numbers is: "<<endl;
//     for (int i = 0; i < count; i++)
//     {
//         cout<<"  "<<odd[i];
//     }
//     cout<<endl;
//     cout<<"array of even numbers is: "<<endl;
//         for (int i = 0; i < count1; i++)
//     {
//         cout<<"  "<<even[i];
//     }
    
//     return 0;
// }

// int main()
// {
//     int n,count=0;
//     int arr[]={2,4,5,11,13,-1,-9};
//     n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if((arr[i]+arr[j])>8)
//             {
//                 count++;
//             }
//         }
//     }
//     cout<<count;
//     sort(arr,arr+n);//sorting of array
//     cout<<"sorted array is: "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


/* int main()
{
    int n;
    cin>>n;
    int temp = n;
    int digitCount = 0;
    while (temp != 0) {
        temp /= 10;
        digitCount++;
    }
    int arr[digitCount];
    temp = n;
    for (int i = digitCount - 1; i >= 0; i--) //to store in origional order
    {      
        arr[i] = temp % 10;
        temp /= 10;
    }
    for (int i = 0; i < digitCount; i++)
    {
        if (arr[i] == 1)
        {
            cout << "one" << endl;
        }
        if (arr[i] == 2)
        {
            cout << "two" << endl;
        }
        if (arr[i] == 3)
        {
            cout << "three" << endl;
        }
        if (arr[i] == 4)
        {
            cout << "four" << endl;
        }
        if (arr[i] == 5)
        {
            cout << "five" << endl;
        }
        if (arr[i] == 6)
        {
            cout << "six" << endl;
        }
        if (arr[i] == 7)
        {
            cout << "seven" << endl;
        }
        if (arr[i] == 8)
        {
            cout << "eight" << endl;
        }
        if (arr[i] == 9)
        {
            cout << "nine" << endl;
        }
    }
    return 0;
}*/

// int main()
// {
//     vector<int> ar;
//     int n,x;
//     cout<<"enter size of array: ";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"enter element for index "<<i<<" : ";
//         cin>>x;
//         ar.push_back(x);
//     }
    
//     int nz=0;
//     for(int i=0;i<n;i++)
//     {
//         if (ar[i]!=0)
//         {
//             swap(ar[i],ar[nz]);
//             nz++;
//         }
        
//     }
//     for(int i:ar)
//     {
//         cout<<i<<" ";
//     }
//     return 0;
// }


// int main()
// {
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;
//     int x;
//     vector<int> ar;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>x;
//         ar.push_back(x);
//     }
//     rotate(ar.begin(),ar.end()-2,ar.end());
//     for (int i:ar)
//     {
//         cout<<i<<" ";
//     }
//     int max;
//     for(int i:ar)
//     {
//         if (ar[i]>ar[i+1])
//         {
//             max=ar[i];
//         }
//         i++;
//     }
//     cout<<endl<<"the max is: "<<max;
//     sort(ar.begin(),ar.end());
//     cout<<endl<<"the max 2 elements are: "<<ar.at(n-2)<<" and "<<ar.back();
//     return 0;
// }


// class area
// {
//     private:
//     int l;
//     int b;
//     public:
//     area(void);
//     void res()
//     {
//         cout<<"area is: "<<l*b;
//     }
// };
// area::area(void)
// {
//     int x,y;
//     cin>>x>>y;
//     l=x;
//     b=y;
// }

// int main()
// {
//     area s;
//     s.res();
// }

int main()
{
    int x;
    vector<int>arr;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        arr.push_back(x);
    }

    arr.pop_back();
    for(int i:arr)cout<<i<<" ";

    return 0;
}

// int *arr=new int[n]//dynamic llocation of array