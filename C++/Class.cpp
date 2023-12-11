// #include <iostream>
// using namespace std;
// class school
// {
// private:
//     int num;
//     float fees;
//     char ch;

// public:
//     int ph_no;
//     char var;
//     void input(int a, float b, char c);
//     void print()
//     {
//         cout << "value of num is " << num << endl;
//         cout << "value of float is " << fees << endl;
//         cout << "value of char is " << ch << endl;
//         cout << "value of ph_no is " << ph_no << endl;
//         cout << "value of var is " << var << endl;
//     }
// };
// void school::input(int a, float b, char c)
// {
//     num = a;
//     fees = b;
//     ch = c;
// }

// int main()

// {
//     school abc;
//     abc.ph_no = 123;
//     abc.var = 'H';
//     abc.input(122, 23.98, 'j');
//     abc.print();
//     return 0;
// }



#include <iostream>
using namespace std;
class school
{
private:
    int num;
    float fees;
    char ch;

public:
    int ph_no;
    char var;
    void input();
    void print()
    {
        cout << "value of num is " << num << endl;
        cout << "value of float is " << fees << endl;
        cout << "value of char is " << ch << endl;
        cout << "value of ph_no is " << ph_no << endl;
        cout << "value of var is " << var << endl;
    }
};
void school::input()
{
    int a;
    float b;
    char c;
    cout << "enter value of num a: ";
    cin >> a;
    num = a;
    cout << "enter value of float num b: ";
    cin >> b;
    fees = b;
    cout << "enter a char: ";
    cin >> c;
    ch = c;
}

int main()

{
    school abc;
    abc.ph_no = 123;
    abc.var = 'H';
    abc.input();
    abc.print();
    return 0;
}


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// class cls{
//     private:
//     int x,y;
//     public:
//     cls(){cout<<"default construcuot called"<<endl;};
//     cls(int a,int b)
//     {
//         x=a;
//         y=b;
//     }
//     void display();
//     cls(cls &ob){
//         cout<<"copy const called"<<endl;
//         x=ob.x;
//         y=ob.y;
//     }
// };
// void cls::display()
// {
//     cout<<"x is: "<<x<<" and y is: "<<y<<endl;
// }

// int main()
// {
//     cls c(10,20);
//     c.display();
//     cls x(c);
//     x.display();
//     cls y=x;
//     y.display();
//     return 0;
// }

// class Rectangle
// {
// private:
//     double length;
//     double width;

// public:
//     void set(double length, double width)
//     {
//         this->length = length;
//         this->width = width;
//     }

//     double area()
//     {
//         return length * width;
//     }

//     double perimeter()
//     {
//         return 2 * (length + width);
//     }
// };

// int main()
// {
//     Rectangle r;
//     r.set(8.9, 6.5);
//     cout << r.area() << endl;
//     cout << r.perimeter() << endl;
// }

// class student
// {
//     public:
//     string name;
//     int roll_no;
//     void display()
//     {
//         cout<<"student name is: "<<name<<endl;
//         cout<<"student roll number is: "<<roll_no<<endl;
//     }
// };
// int main()
// {
//     student x;
//     x.name="bachu";
//     x.roll_no=2199;
//     x.display();
// }


// class triangle{
//     private:
//     int a,b,c;
//     public:
//     void check(int a,int b,int c)
//     {
//         if ((a==b)&&(b==c))
//         {
//             cout<<"equiateral"<<endl;
//         }
//         else if (((a==b)&&(b!=c))||((a!=b)&&(b==c))||((a==c)&&(c!=b)))
//         {
//             cout<<"isosceles"<<endl;
//         }
//         else if((a!=b)&&(b!=c))
//         {
//             cout<<"scalene";
//         }

//     }
// };
// int main()
// {
//     triangle x;
//     x.check(3,13,23);
// }


// class rectangle{
//     public:
//     int length;
//     int breadth;
//     int area(int length,int breadth)
//     {
//         return length*breadth;
//     }
// };
// int main()
// {
//     rectangle x,y;
//     cout<<x.area(4,5)<<endl;
//     cout<<y.area(5,8)<<"\n";
// }


// class zoo{
//     public:
//     virtual void makeSound()
//     {
//         cout << "sound" << endl;
//     }
// };

// class lion:public zoo{
//     public:
//     void makeSound() override{
//         cout << "Roar" << endl;
//     }
// };

// class elephant:public zoo{
//     public:
//     void makeSound() override{
//         cout << "Trumpet" << endl;
//     }
// };

// int main()
// {
//     lion l1;
//     elephant e1;
//     int a;
//     cout << "Enter: ";
//     cin >> a;
//     if(a==1)
//     {
//         l1.zoo::makeSound();
//     }
//     else if(a==2)
//     {
//         e1.makeSound();
//     }
//     else{
//         cout << "Invalid choice";
//     }
//     return 0;
// }

/*
class cart{
    public:
    string name;
    int price;
    int quantity;
    cart(string n,int p,int q){
        name = n;
        price = p;
        quantity = q;
    }
    int operator+(cart& c){
        int val1 = (price*quantity) + (c.price*c.quantity);
        return val1;
    }
};

int main()
{
    cart c1("Laptop",50000,3);
    cart c2("Earphones",3000,2);
    cout << c1 + c2 << endl;
    return 0;
}*/


/*
class secretBase{
    public:
    string location;
    int level;
    secretBase(){
        location = "unknown";
        level = 0;
    }
    secretBase(string loc,int lev){
        location = loc;
        level = lev;
    }
    ~secretBase(){
        cout << "A message is displayed when the SecretBase object is destroyed, indicating the destruction of the secret base" << endl;
    }
};

int main()
{
    string loc;
    int lev;
    cout << "Enter location: ";
    getline(cin,loc);
    if(loc=="N/A"){
        secretBase s1;
        cout << "A secret base with an " << s1.location <<" location, security level " << s1.level << ", and a message when the base is destroyed.";
        exit(0);
    }
    cout << "Enter level: ";
    cin >> lev;
    secretBase s2(loc,lev);
    cout << "A SecretBase object is created with the location set to " << s2.location << " and the security level set to " << s2.level << endl;
    return 0;
}*/

/*
class finch{
    public:
    int feet,inch;
    finch(int f,int i){
        feet = f;
        inch = i;
    }
    finch operator+(finch& f){
        int val1 = feet + f.feet;
        int val2 = inch + f.inch;
        return finch(val1,val2);
    }
    void display(){
        if(inch <=11)
            cout << feet << "'" << inch << '"' << endl;
        else{
            cout << feet+1 << "'" << inch-12 << '"' << endl;
        }
    }
};

int main()
{
    finch f1(3,4),f2(4,5);
    finch f3 = f1 + f2;
    f3.display();
    return 0;
}*/

/*
#include <iostream>
using namespace std;

class timeMachine{
    public:
    int year;
    int month;
    timeMachine(int y,int m){
        year = y;
        month = m;
    }
    void operator++(){
        month = month + 1;
    }
    void operator--(){
        month = month - 1;
    }
    void display(){
        cout << month << " " << year << endl;
    }
};

int main()
{
    timeMachine t1(2005,4);
    t1.display();
    ++t1;
    t1.display();
    --t1;
    t1.display();
    return 0;
}
*/

/*

class employee{
    public:
    string name;
    int salary;
    employee(string name,int salary){
        this->name = name;
        this->salary = salary;
    }
};

class developer:public employee{
    public:
    int age;
    developer(string n1,int s1,int a):employee(n1,s1){
        age = a;
    }
    void trait(){
        cout << "knows ethical hacking" << endl;
    }
};

int main()
{
    developer d1("yo",12345,28);
    cout << d1.name;
    cout << d1.salary;
    cout << d1.age;
    d1.trait();
    return 0;
}
*/

/*

class shape{
    public:
    virtual int getArea() = 0;
};

class circle:public shape{
    public:
    int radius;
    circle(int r){
        radius = r;
    }
    int getArea() override{
        return 3.1415 * radius * radius;
    }
};

int main()
{
    circle c1(10);
    cout << c1.getArea();
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

class shopping{
    public:
    int quantity;
    string code;
    shopping(int q,string c){
        quantity = q;
        code = c;
    }
    void display(){
        if(quantity<0 || code=="" || code==" "){
            cout << "Invalid info" << endl;
        }
        else{
            cout << quantity << " " << code << endl;
        }
    }
};

int main()
{
    int q;
    string code;
    getline(cin,code);
    cin >> q;
    shopping s1(q,code);
    s1.display();
    return 0;
}*/
