#include<iostream>
using namespace std;

class y;
class x
{
    int value;

    public:
    void setvalue(int num)
    {
        value=num;
    }
friend void add(x,y);
};

class y
{
    int num;

    public:
        void setvalue(int value)
        {
            num=value;
        }
friend void add(x,y);
};

void add(x a,y b)
{
    cout<<"sum of values is: "<<a.value+b.num<<endl;
}

int main()

{
    x a;
    y b;
    a.setvalue(10);
    b.setvalue(20);
    add(a,b);
    return 0;
}