#include<iostream>
using namespace std;
//program to print 1 to n using recursion
void fn(int n,int x)
{
    if (n==x)
    {
        return;
    }
    cout<<n;
    fn(n+1,x);
}
int main()
{
    int n,x;
    cin>>n>>x;
    fn(n,x);
}