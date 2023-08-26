#include<iostream>
using namespace std;

// void swap(int x,int y);


void swap_ptr(int *x,int *y);


int main()

{
    int a,b;
    cout<<"enter value of a: ";
    cin>>a;
    cout<<"enter value of b: ";
    cin>>b;
    cout<<"value of a is"<<a<<endl<<"value of b is"<<b<<endl;
    // swap(a,b);
    swap_ptr(&a,&b);//it will make changes in the value pesent in the address
    cout<<"value of a is"<<a<<endl<<"value of b is"<<b<<endl; //will take value from address
    return 0;
}

// void swap(int x,int y)//it will not swap because it does'nt make any changes in the value present in the address
// {
//     int temp=x;
//     x=y;
//     y=temp;
// }

void swap_ptr(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}