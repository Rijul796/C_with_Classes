#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
// int main()
// {
//     queue<int>q;
//     int n,x;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>x;
//         q.push(x);
//     }
//     q.pop();
//     cout<<"the size is: "<<q.size()<<endl;
//     if (q.empty())
//     {
//         cout<<"q s empty"<<endl;
//     }
//     while (q.size()>0)
//     {
//         cout<<q.front()<<" ";
//         q.pop();
//     }
    
//     return 0;
// }


// int main()
// {
//     queue<int> q;
//     int arr[100];
//     int size;
//     cout<<"enter size of array: ";
//     cin>>size;
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"enter ele: ";
//         cin>>arr[i];
//         q.push(arr[i]);
//     }
//     for (int i = size-1; i >= 0; i--)
//     {
//         arr[i]=q.front();
//         q.pop();
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }