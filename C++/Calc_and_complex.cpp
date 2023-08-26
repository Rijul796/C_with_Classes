#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumreal(complex a, complex b);
    int sumcomp(complex a,complex b);
};

class complex
{
    int a, b;

    // friend int calculator ::sumreal(complex a, complex b);//particular declaration of a specific function
    // friend int calculator :: sumcomp(complex a,complex b);

    friend class calculator;//declaration to give access for whole class

public:
    void setnumber(int x, int y)
    {
        a = x;
        b = y;
    }

    void printnumber()
    {
        cout << "number is " << a << " + " << b << " i" << endl;
    }
};

int calculator ::sumreal(complex a, complex b)
{
    return ((a.a) + (b.a));
}

int calculator :: sumcomp(complex a ,complex b)
{
    return ((a.b)+(b.b));
}

int main()

{
    complex i, j;

    i.setnumber(12, 22);
    i.printnumber();

    j.setnumber(34, 56);
    j.printnumber();

    calculator calc;

    int res = calc.add(12, 43);
    cout<<"addition of a and b is: " << res << endl;

    int res2 = calc.sumreal(i, j);
    cout<<"sum of real part is: " << res2 << endl;

    int resc=calc.sumcomp(i,j);
    cout<<"sum of complex part is: "<<resc<<endl;

    return 0;
}