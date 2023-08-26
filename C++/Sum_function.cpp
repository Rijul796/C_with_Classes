#include<iostream>
using namespace std;

int sum(int a,int b);

int main()
{
    int x,y;
    cout<<"enter value of x: ";
    cin>>x;
    cout<<"enter value of y: ";
    cin>>y;
    cout<<"the sum of x and y is: "<<sum(x,y);
    return 0;
}
int sum(int a,int b)
{
    int c=a+b;
    return c;
}