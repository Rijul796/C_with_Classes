#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);

    void print()
    {
        cout << "number is: " << a << " + " << b << " i" << endl;
    }
};

complex ::complex(int x, int y)
{
    a = x;
    b = y;
}

int main()

{
    complex a(12, 23); // implicit call
    complex b = complex(14, 43);
    a.print();
    b.print();
    return 0;
}