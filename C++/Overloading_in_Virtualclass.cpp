#include<iostream>
using namespace std;

class a
{
    public:
    int a=10;
    void show()
    {
        cout<<"base class";
    };
};
class b:public virtual a{
    public:
    void show()
    {
        cout<<"derived class";
    }
};
int main()
{
    b obj;
    obj.show();
    return 0;
}