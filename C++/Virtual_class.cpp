#include<iostream>
using namespace std;
// class a{
//     public:
//     int a=10;
// };
// class b:public virtual a{

// };
// int main()
// {
//     b obj;
//     cout<<obj.a<<endl;
//     return 0;
// }


// class a{
//     public:
//     virtual void show()
//     {
//         cout<<"base class";
//     }
// };
// class b:public a{
//     public:
//     void show()
//     {
//         cout<<"derived class";
//     }
// };
// int main()
// {
//     // b obj;
//     // obj.show();
//     // obj.a::show();//early binding or compile time binding
//     // a ob;
//     // ob.show();
//     a *ptr;
//     // a obj;
//     b obj;
//     ptr=&obj;
//     ptr->show();// or we can write as (*ptr).show();
// }

class student{
    protected://private but can be inherited
    int roll_no;
    public:
    void set(int a)
    {
        roll_no=a;
    }
    void print(void)
    {
        cout<<"roll number is :"<<roll_no<<endl;
    }
};

class test:virtual public student{
    protected:
    float maths,physics;
    public:
    void setm(float m1,float m2)
    {
        maths=m1;
        physics=m2;
    }
    void printm(void)
    {
        cout<<"-----result is:-----"<<endl
        <<"maths: "<<maths<<endl
        <<" physics: "<<physics<<endl;
    }
};

class sports:virtual public student{
    protected:
    float score;
    public:
    void setc(float sc)
    {
        score=sc;
    }
    void printsc(void)
    {
        cout<<"your score in sports is: "<<score<<endl;
    }
};

class result:public test,public sports{
    private:
    float total;
    public:
    void display(void)
    {
        total=maths+physics+score;
        cout<<"total score of roll no "<<roll_no<<" is: "<<total<<endl;
    }
};
int main()
{
    result x;
    x.setm(86.5,90.6);
    x.setc(90.0);
    x.set(21);
    x.display();
}