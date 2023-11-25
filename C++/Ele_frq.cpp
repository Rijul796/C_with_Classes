#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    // sort(arr.begin(),arr.end());
    int ele=arr[0],count=1;
    for (int i = 0; i < n; i++)
    {
        if (count==0)
        {
            ele=arr[i];
            count=1;
        }        
        if (ele==arr[i])
        {
            count++;
        }
        if (ele!=arr[i])
        {
            count--;
        }
    }
    cout<<ele;
    return 0;
}