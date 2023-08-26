#include<iostream>
using namespace std;

int sum(int a,int b);

int main()

{
    // int a,b;
    // cout<<"enter value of a: ";
    // cin>>a;
    // cout<<"enter value of b: ";
    // cin>>b;
    int a;
    cin>>a;
    for (int i = 0; i < 5; i++)
    {
        // cout<<"value is "<<sum(a,b)<<endl;
        cout<<"value is "<<sum(a,10)<<endl;
    }
    return 0;
}

// int sum(int a,int b)
// {
//     static int d=0;//same role as i++
//     d=d+1;
//     return a+b+d;
// }

int sum(int a,int b)
{
    return a+b;
}