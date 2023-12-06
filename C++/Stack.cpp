#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
// int main()
// {
//     stack<int>st;
//     int size,x;
//     cout<<"enter size of stack: ";
//     cin>>size;
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"enter element for position "<<i+1<<" : ";
//         cin>>x;
//         st.push(x);
//     }
//     cout<<"the size of stack is: "<<st.size()<<endl;
//     if (st.empty())     
//     {
//         cout<<"stack is empty";
//     }
//     while (st.size())
//     {
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     return 0;
// }


// int main()
// {
//     stack<int>s;
//     int size,x;
//     int arr[100];
//     cout<<"enter size of array: ";
//     cin>>size;
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"enter element for position "<<i+1<<" : ";
//         cin>>x;
//         arr[i]=x;
//     }
//     for (int i = 0;i<size;i++)
//     {
//         s.push(arr[i]);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     return 0;
// }

// int main() {
//   stack<int> st;
//   int arr[100];
//   int size;

//   cout << "enter size of array: ";
//   cin >> size;

//   for (int i = 0; i < size; i++) {
//     cout << "enter element: ";
//     cin >> arr[i];
//     st.push(arr[i]);
//   }

//   for (int i = 0; i < size; i++) {
//     arr[i] = st.top(); // Copy element from stack to array
//     st.pop(); // Remove element from stack
//   }

//   for (int i = 0; i < size; i++) {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }