#include<iostream>
using namespace std;

class employee
{
private:
    int a,b,c;
public:
    int d,e;
    void data(int ab,int bc,int cd);
    void getdata()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        // cout<<"enter the value of d: ";
        // cin>>d;
        cout<<"the value of d is "<<d<<endl;
        // cout<<"enter the value of e: ";
        // cin>>e;
        cout<<"the value of e is "<<e<<endl;
    }
};

void employee :: data(int ab,int bc,int cd)
{
    a=ab;
    b=bc;
    c=cd;
}

int main()

{
    //x.d=21;//public data can be accessed
    //x.e=123;
    //x.a=12;//will throw error because it is a private function and cant be accessed
    employee x;//object for class is created
    x.data(12,13,14);
    x.d=232;
    x.e=23;
    x.getdata();
    return 0;
}