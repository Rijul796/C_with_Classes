#include <iostream>
using namespace std;

class student
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id for student number " << count + 1 << ": ";
        cin >> id;
        count++;
    }

    void getdata(void)
    {
        cout << "the id of student number " << count << "  is: " << id << endl;
    }

    static void getcount (void)//used to access static functions
    {
        cout<<"this is student number: "<<count<<endl;
    }
};
// int student ::count; // default value is 0 , common variable and set value here
int student::count=1000;
int main()

{
    student x, y, z;
    x.setdata();
    x.getdata();
    x.getcount();
    y.setdata();
    y.getdata();
    z.setdata();
    z.getdata();
    return 0;
}