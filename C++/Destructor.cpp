#include<iostream>
using namespace std;

class st{
    public:
    // int roll;
    st()
    {
        cout<<"constructor is called\n";
    }
    ~st()//for static alocations we will use delete a for dynamic allocations
    {
        cout<<"destructor is called\n";
    }
};

int main()
{
    st a;
    // a.roll=10;
    return 0;
}