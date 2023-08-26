#include<iostream>
using namespace std;

// int fact(int x);

// int sum(int x);

int fib(int x);
int main()
{
    int a;
    cout<<"enter the value of number: ";
    cin>>a;
    // cout<<"the value of factorial of "<<a<<" is :"<<fact(a);
    // cout<<"the sum of "<<a<<" natural no.s is : "<<sum(a);
    cout<<"the sum of fib series is: "<<fib(a);
    return 0;
}
// int fact(int x)
// {
//     if (x<=1){
//         return 1;
//     }
//     return x*fact(x-1);
// }

// int sum(int x)
// {
//     if (x<=1)
//     {
//         return x;
//     }
//     return x+sum(x-1);
// }

int fib(int x)
{
    if(x<2)
    {
        return 1;
    }
    return fib(x-2)+fib(x-1);
}