#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the value of x : ";//'<<' is called insertion operator
    cin>>x;//'>>' is called extraction operator
    cout<<"enter value of y : ";
    cin>>y;
    cout<<"x is :"<<x<<endl;
    cout<<"y is :"<<y<<endl;
    cout<<"sum of x and y is :"<<x+y<<endl;
    cout<<"done"<<endl;
    cout<<"the value of x+y is :"<<((float)(x+y))<<endl;
    float a=4.96;
    cout<<"the value of a is :"<<(int)a<<endl;
    const int i=5;//can't be modified because it is a constant variable
    cout<<"the value of i is :"<<i<<endl;
    int q=12,w=29,r=3778;
    cout<<"the value of q is :"<<setw(4)<<q<<endl;//setw is used for setting the width of the digit
    cout<<"the value of w is :"<<w<<endl;
    cout<<"the value of r is :"<<r<<endl;
}