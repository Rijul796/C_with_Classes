#include<iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}

int sum(int a,int b,int c)
{
    return a+b+c;
}
int main()

{
    int a,b,c;
    cout<<"enter value of a: ";
    cin>>a;
    cout<<"enter value of b: ";
    cin>>b;
    cout<<"enter value of c: ";
    cin>>c;
    cout<<"the sum of a and b is "<<sum(a,b)<<endl;
    cout<<"the sum of a,b and c is "<<sum(a,b,c)<<endl;
    return 0;
}