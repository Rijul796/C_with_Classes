#include<iostream>
using namespace std;

//inline void swap(int &x,int&y);// can be used if we have to use a short function multile times
void swap(int &x,int &y);//call by pointer reference
int main()

{
    int a,b;
    cout<<"enter value of a: ";
    cin>>a;
    cout<<"enter value of b: ";
    cin>>b;
    cout<<"value of a is"<<a<<endl<<"value of b is"<<b<<endl;
    swap(a,b);
    cout<<"value of a is"<<a<<endl<<"value of b is"<<b<<endl;
    return 0;
}

void swap(int &x,int&y)
{
    int temp=x;
    x=y;
    y=temp;
}