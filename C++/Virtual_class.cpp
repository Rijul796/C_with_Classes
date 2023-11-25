#include<iostream>
using namespace std;
// class a{
//     public:
//     int a=10;
// };
// class b:public virtual a{

// };
// int main()
// {
//     b obj;
//     cout<<obj.a<<endl;
//     return 0;
// }

class a{
    public:
    virtual void show()
    {
        cout<<"base class";
    }
};
class b:public a{
    public:
    void show()
    {
        cout<<"derived class";
    }
};
int main()
{
    // b obj;
    // obj.show();
    // obj.a::show();//early binding or compile time binding
    // a ob;
    // ob.show();
    a *ptr;
    // a obj;
    b obj;
    ptr=&obj;
    ptr->show();// or we can write as (*ptr).show();
}