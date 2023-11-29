#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class base{
    public:
    int x;
    void display(void){
    cout<<"base class"<<endl<<"value is: "<<x<<endl;}
};
class derived:virtual public base{
    public:
    int y;
    void display(void)
    {
        cout<<"derived class"<<endl<<"value is: "<<y<<endl;
        cout<<"base class called in derived"<<endl<<"value is: "<<x<<endl;
    }
};
int main()
{
    // base *ptr;
    // base ob;
    // ptr=&ob;
    // ptr->x=10;
    // ptr->display();
    // //derived
    // derived obj;
    // derived *p;
    // p=&obj;
    // p->y=20;
    // p->x=89;
    // p->display();


    base *ptr;
    derived obj;
    derived *p;
    ptr=&obj;
    ptr->x=10;
    ptr->display();
    p=&obj;
    p->y=20;
    p->x=89;
    p->display();
    return 0;
}