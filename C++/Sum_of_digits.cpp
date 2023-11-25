#include<iostream>
using namespace std;
int sod(int n)
{
    if(n<10)
    {
        return n;
    }
    else{
        return n%10+sod(n/10);
    }
}
int main()
{
    int x;
    cout<<"enter a number: ";
    cin>>x;
    cout<<sod(x);
    return 0;
}