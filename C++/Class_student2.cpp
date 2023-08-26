#include<iostream>
using namespace std;

class student
{
    int id;
public:
void setid(void)
{
    cout<<"enter the id: ";
    cin>>id;
}
void getid(void)
{
    cout<<"the id of student is: "<<id<<endl;
}
};

int main()

{
    student std[5];
    for (int i = 0; i < 5; i++)
    {
        std[i].setid();
        std[i].getid();
    }
    return 0;
}