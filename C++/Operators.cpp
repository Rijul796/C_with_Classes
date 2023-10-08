#include<iostream>
using namespace std;

// int main()

// {
//     int a=2/5;
//     cout<<a<<endl;
//     cout<<2/5<<endl;
//     cout<<2.0/5<<endl;
//     double b=2.0/5;
//     cout<<b<<endl;
//     double c=2/5;
//     cout<<c<<endl;
//     return 0;
// }

struct x
{
    int a;
    char b;
    string c;
};

int main()
{
    struct x r;
    r.a=12;
    r.b='X';
    r.c="anshul";
    cout<<r.a<<"   "<<r.b<<"  "<<r.c<<endl;
    return 0;
}