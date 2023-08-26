#include<iostream>
using namespace std;

int main()

{
    // int a=10;
    // int *b=&a;
    // cout<<&a<<endl;//address of variable a
    // cout<<b<<endl;//value of b i.e address stored
    // cout<<*b<<endl;//value in the address of b
    // int **c=&b;//pointer to pointer,address of pointer b is stored in c
    // cout<<&b<<endl;//address of b
    // cout<<c<<endl;//value of c i.e address stored in c
    // cout<<**c<<endl;//value in the address to the value in the value of address c->b->a
    int marks[]={12,143,145,135};
    int *p=marks;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"value at marks["<<i<<"]"<< "is: "<<*(p+i)<<endl;
    // }
    cout<<*p<<endl;
    cout<<*(p++)<<endl;//will gives p+1 for next
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    return 0;
}