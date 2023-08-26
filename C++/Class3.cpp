#include <iostream>
using namespace std;
class y;
class x
{
    int var1;
    friend void exchange(x &,y &);
public:
    void num(int a)
    {
        var1 = a;
    }
    void print()
    {
        cout << "the value of var1 is: " << var1 << endl;
    }
};

class y
{
    int var2;
    friend void exchange(x &,y &);
public:
    void num2(int b)
    {
        var2 = b;
    }

    void print()
    {
        cout << "the value of var2 is: " << var2 << endl;
    }
};

void exchange(x &a,y &b)
{
    int temp=a.var1;
    a.var1=b.var2;
    b.var2=temp;
}

int main()

{
    x a1;
    y a2;
    a1.num(10);
    a2.num2(20);
    a1.print();
    a2.print();
    exchange(a1,a2);
    cout<<"value after swapping "<<endl;
    a1.print();
    a2.print();
    return 0;
}