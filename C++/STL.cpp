#include<iostream>
#include<array>
#include<vector>
#include<algorithm>

using namespace std;
// int main()
// {
//     array<int,5> arr={1,2,3,4,5};
//     int size=arr.size();
//     cout<<"size is: "<<size<<endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"element at index 3 is: "<<arr.at(3)<<endl;
//     cout<<"the first element is :"<<arr.front()<<" and the last element is: "<<arr.back();
//     return 0;
// }

// int main()
// {
    // vector<int> v;
    // v.push_back(1);
    // cout<<"size is: "<<v.size()<<endl;
    // cout<<"capacity is: "<<v.capacity()<<endl;
    // v.push_back(2);
    // cout<<"size is: "<<v.size()<<endl;
    // cout<<"capacity is: "<<v.capacity()<<endl;
    // v.push_back(3);
    // cout<<"size is: "<<v.size()<<endl;
    // cout<<"capacity is: "<<v.capacity()<<endl;
    // int n=v.size();
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<v.at(i)<<" ";
    // }
    // cout<<endl;
    // cout<<"the first element is :"<<v.front()<<" and the last element is: "<<v.back()<<endl;
    // v.pop_back();
    // cout<<"the first element is :"<<v.front()<<" and the last element is: "<<v.back();
    // v.clear();
    // for (auto i :v)//loop 
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // vector<int> cpy(v);//copy a array in a new array using vector
    // for (auto i :cpy)
    // {
    //     cout<<i<<" ";
    // }
    // rotate(v.begin(),v.begin()+2,v.end());
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }
    //     cout<<endl;
    //     rotate(v.begin(),v.end()-2,v.end());
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }
// }

// int main()
// {
    // string s;
    // getline(cin,s);
    // cout<<s<<endl;
    // reverse(s.begin(),s.end());
    // cout<<s<<endl;
    // sort(s.begin(),s.end());
    // cout<<s<<endl;
    // string s1;
    // getline(cin,s1);
    // cout<<s.compare(s1);//for comparing if equal 0 if a>b 1 else -1
    // cout<<s.find("ok")<<endl;
    // string s1;
    // getline(cin,s1);
    // s.erase(s.find(s1),s1.size());
    // cout<<s;
// }

// int main()
// {
//     int n,x;
//     cout<<"enter size for array: ";
//     cin>>n;
//     vector<int> ar;
//     for(int i=0;i<n;i++)
//     {
//         cin>>x;
//         ar.push_back(x);
//     }
//     for(int i:ar)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     vector<int> v1(ar);
//     for(int i:v1)
//     {
//         cout<<i<<" ";
//     }
// }


int main()
{
// char str[] = "Hello, World!";
// char* ptr = str + 7;
// cout<<str;
// cout << *(ptr - 2);
string s="helo it is bachu hehe";
s.erase(remove(s.begin(),s.end(),' '),s.end());//to remove spaces between a string
cout<<s;
}