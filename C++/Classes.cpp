#include <iostream>
#include <string.h>
using namespace std;

// class stu{
//     string name;
//     int roll;
//     public:
//     void get(string n)
//     {
//         name=n;
//     }
//     void print()
//     {
//         cout<<name;
//     }
// };

// int main()
// {
//     stu abc;
//     abc.get("suuuuuuuuu..");
//     abc.print();
//     return 0;
// }

// class rectangle{
//     private:
//     float length,breadth;
//     public:
//     void get_values(float x,float y)
//     {
//         length=x;
//         breadth=y;
//     }
//     float area()
//     {
//         return length*breadth;
//     }
//     float perimeter()
//     {
//         return 2*(length+breadth);
//     }
//     void print()
//     {
//         cout<<"area of rectangle is: "<<area()<<endl;
//         cout<<"area of rectangle is: "<<perimeter()<<endl;
//     }
// };

// int main()
// {
//     float a,b;
//     rectangle rec;
//     cout<<"enter length: ";
//     cin>>a;
//     cout<<"enter breadth: ";
//     cin>>b;
//     rec.get_values(a,b);
//     rec.print();
//     return 0;
// }

// class student{
//     private:
//     int marks;
//     public:
//     void get(int x)
//     {
//         marks=x;
//     }
//     void print()
//     {
//         cout<<"Grade obtained is: ";
//         if (marks>=90)
//         {
//             cout<<"A+";
//         }
//         else if (marks>=80)
//         {
//             cout<<"A";
//         }
//         else if (marks>=70)
//         {
//             cout<<"B";
//         }
//         else if (marks>=60)
//         {
//             cout<<"C";
//         }
//         else if (marks>=50)
//         {
//             cout<<"D";
//         }
//         else
//         {
//             cout<<"FAIL";
//         }
//     }
// };

// int main()
// {
//     student x;
//     int n;
//     cout<<"enter marks of student: ";
//     cin>>n;
//     x.get(n);
//     x.print();
//     return 0;
// }

// Base class
// class Animal {
// public:
//     void eat() {
//         cout << "Animal is eating." << endl;
//     }
// };

// // Derived class
// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "Dog is barking." << endl;
//     }
// };

// int main() {
//     Dog myDog;
//     myDog.eat();   // Output: Animal is eating.
//     myDog.bark();  // Output: Dog is barking.

//     return 0;
// }

// class emp
// {
//     private:
//     int id;
//     int salary;
//     public:
//     static int count;
//     void get(int x,int y);
//     void show(void);
// };
// void emp ::get(int x,int y)
// {
//     id=x;
//     salary=y;
//     count++;
// }
// void emp::show()
// {
//     cout<<"this is emp no: "<<count<<endl;
//     cout<<"emp id is: "<<id<<endl;
//     cout<<"emp salary is: "<<salary<<endl;
// }
// int emp::count;
// int main()
// {
//     emp a;
//     a.get(10,121);
//     a.show();
//     emp b;
//     b.get(20,2072);
//     b.show();
// }

// class student
// {
// private:
//     int id;
//     int age;
//     static int count;

// public:
//     int studentnumber;
//     void get();
//     void show();
// };
// int student::count;
// void student::get()
// {
//     int x, y;
//     cout << "enter id,age of student " << student::count + 1 << ": ";
//     cin >> x;
//     id = x;
//     cin >> y;
//     age = y;
//     studentnumber = ++count;
// }
// void student::show()
// {
//     cout << "the id and age of " << studentnumber << " is: " << id << " and age is: " << age << endl;
// }
// int main()
// {
//     int x;
//     student n[4];
//     x = sizeof(n) / sizeof(n[0]);
//     for (int i = 0; i < x; i++)
//     {
//         n[i].get();
//     }
//     cout << "details are: " << endl;
//     for (int i = 0; i < x; i++)
//     {
//         n[i].show();
//     }

//     return 0;
// }

// class complex;//forward declaration
// class calc
// {
//     public:
//     int sum(int a, int b)
//     {
//         return a + b;
//     }

//     int comp(complex, complex);//declaration
//     int compc(complex, complex);
// };

// class complex
// {
//     int a, b;
//     friend int calc ::comp(complex , complex );//granting access to calc class for private members of complex class
//     friend int calc ::compc(complex , complex );
//     // friend class calc;// to grant full access 

// public:
//     void set(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void print()
//     {
//         cout << "the number is: " << a << "+" << b << "i" << endl;
//     }
// };

// int calc::comp(complex o1, complex o2)
// {
//     return (o1.a + o2.a);
// }
// int calc::compc(complex o1,complex o2)
// {
//     return (o1.b+o2.b);
// }
// int main()
// {
//     complex x,y;
//     x.set(2,5);
//     y.set(4,3);
//     x.print();
//     calc z;
//     cout<<z.sum(2,5)<<endl;
//     cout<<z.comp(x,y)<<endl;
//     cout<<z.compc(x,y);
//     return 0;
// }

/*
class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X, Y);    
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(X, Y);    

};

void add(X o1, Y o2){
    cout<<"Summing data of X and Y objects gives me "<< o1.data + o2.num;
}
int main(){
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(15);

    add(a1, b1);
    return 0;
}
*/


/*
class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X, Y);    
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(X, Y);    

};

void add(X o1, Y o2){
    cout<<"Summing data of X and Y objects gives me "<< o1.data + o2.num;
}
int main(){
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(15);

    add(a1, b1);
    return 0;
}
*/



// class g1
// {
//     public:
//     int roll;
//     string name;
//     friend class g2;
// };

// class g2
// {
//     public:
//     void show(g1 &object)
//     {
//         cout<<object.roll<<" and "<<object.name<<endl;
//     }
// };

// int main()
// {
//     g1 a;
//     a.roll=1;
//     a.name="bachu";
//     g2 b;
//     b.show(a);
// }


// class Employee
// {
// private:
//     float salary;
//     int hours_of_work;

// public:
//     Employee() {}

//     void getInfo()
//     {
//         cout << "Enter the salary of the employee : ";
//         cin >> salary;
//         cout << "Enter the hours of work per day : ";
//         cin >> hours_of_work;
//     }

//     void addSalary()
//     {
//         if (salary < 500)
//         {
//             salary = salary + 10;
//         }
//     }

//     void addWork()
//     {
//         if (hours_of_work > 6)
//         {
//             salary = salary + 5;
//         }
//     }
//     void printFinalSalary()
//     {
//         cout << "The final salary of the employee is : " << salary << endl;
//     }
// };
// int main()
// {
//     Employee employee;
//     employee.getInfo();
//     employee.addSalary();
//     employee.addWork();
//     employee.printFinalSalary();

//     return 0;
// }

// class Triangle{
//     public:
//     int s1,s2,s3;
//     Triangle(int a, int b, int c)
//     {
//         s1 = a;
//         s2 = b;
//         s3 = c;
//     }

//     void print_perimeter(){
//         double s = (s1 + s2 + s3)/2.0;
//         cout << s <<endl;
//         cout << "The perimeter is : " << s << endl;
//     }
// };

// int main()
// {
//     Triangle t(3,4,5);
//     t.print_perimeter();
//     return 0;
// }

// class Area{
//     public:
//     int length , breadth;
//     Area(int a , int b)
//     {
//         length = a;
//         breadth = b;
//     }

//     void print_area()
//     {
//         int s = length * breadth;
//         cout << "Area is : " << s << endl;
//     }
//     Area(){cout<<"default";};//default constructor
// };

// int main()
// {
//     int a , b;
//     cout<<"Enter the value of a : ";
//     cin>>a;

//     cout<<"Enter the value of b : ";
//     cin>>b;

//     Area A(a , b);
//     A.print_area();
//     Area();
//     return 0;
// }

class cls{
    public:
    int x;
    cls(){cout<<"default cnststr";};//default constructor
    cls (int x)
    {
        this->x=x;
        cout<<x<<" "<<this<<" ";
    }
    void print()
    {
        cout<<"value of x is: "<<x<<" ";
    }
};
int main()
{
    cls a(10);
    cout<<&a;
    cls *b=new cls(20);//dynamic allocation
    b->print();
    cls d;
    

}