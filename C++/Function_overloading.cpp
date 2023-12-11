#include<iostream>
using namespace std;
// int sum(int a,int b)
// {
//     return a+b;
// }

// int sum(int a,int b,int c)
// {
//     return a+b+c;
// }

// int main()
// {
//     int x,y,z;
//     cout<<"enter value of x , y and z: ";
//     cin>>x>>y>>z;
//     cout<<"sum of x and y is: "<<sum(x,y)<<endl;
//     cout<<"sum of x,y and z is: "<<sum(x,y,z)<<endl;
// }
int sum_n(int x)
{
    int s=0;
    for (int i = 1; i <= x; i++)
    {
        s+=i;
    }
    return s;
    
}
int  main()
{
    int x;
    cout<<"enter the value of x: ";
    cin>>x;
    cout<<"sum of first "<<x<<" natural numbers to n is: "<<sum_n(x);
}
