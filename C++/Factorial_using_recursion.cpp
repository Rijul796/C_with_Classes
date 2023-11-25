#include<iostream>
using namespace std;

int fact(int n)
{
    int res;
    if (n==1||n==0)
    {
        return 1;
    }
    else{
    res=n*fact(n-1);}
    return res;

}
int main()
{
    cout<<fact(5);
    return 0;
}