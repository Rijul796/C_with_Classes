#include<iostream>
#include<string.h>
using namespace std;

struct employee
{
    int id;
    char name;
    float salary;
};

union xyz
{
    int x;
    char y;
    float z;
};

int main()

{
    struct employee abc;
    abc.id=123;
    abc.name='a';
    abc.salary=999999;
    cout<<abc.name<<endl;

    union xyz r;
    r.x=21;
    // r.y='i';
    // r.z=2.56;
    cout<<r.x<<endl;//largest memory block is used for all and it overwrites because memory is being shared
    // cout<<r.y<<endl;//so only the latest value will be correct
    // cout<<r.z<<endl;//so give only one value in case of union   

    enum inti{ab,bc,cd};//same as index numbers
    cout<<bc<<endl;
    inti j=cd;
    cout<<j<<endl;
    cout<<ab<<endl;
    return 0; 
}