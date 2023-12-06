// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> arr;
//     int n,x;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>x;
//         arr.push_back(x);
//     }
//     // sort(arr.begin(),arr.end());
//     int ele=arr[0],count=1;
//     for (int i = 0; i < n; i++)
//     {
//         if (count==0)
//         {
//             ele=arr[i];
//             count=1;
//         }        
//         if (ele==arr[i])
//         {
//             count++;
//         }
//         if (ele!=arr[i])
//         {
//             count--;
//         }
//     }
//     cout<<ele;
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int arr[100],size;
    cout<<"enter size of array: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter element for index "<<i+1<<" :  ";
        cin>>arr[i];
    }
    int max_element=0,max_count=0;
    for (int i = 0; i < size; i++)
    {
        int current_element=arr[i];
        int current_count=0;
        for(int j=0;j<size;j++)
        {
            if (arr[j]==current_element)
            {
                current_count++;
            }
            
        }
        if (current_count > max_count) {
            max_count = current_count;
            max_element = current_element;
        }
    }
    if(max_count==1)
    {
        cout<<"there is no repeated element ! ";
    }
    else{
        cout<<"element "<<max_element<<" is repeated "<<max_count<<" times";}
    return 0;
}