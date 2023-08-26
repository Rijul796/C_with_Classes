#include<iostream>
using namespace std;
int glo=10;//global variable
int main()
{
    int glo=5;//local variable
    cout<<glo;//we can use same name for local and global variables,priority is given to local variable
    int a,b;
    cout<<"enter values of a and b : ";
    scanf("%d %d",&a,&b);
    cout<<"hey ! \nvalue of a is " <<a<< "\nvalue of b is " <<b ;
    cout<<::glo<<endl;//::used to use the global variable
    long double x=12.2312l;//we can use l/L and f/F after number for variable type
    cout<<x<<endl;
    int &d=a;//it will use a as a refrence variable
    cout<<d;
    return 0;
}
 