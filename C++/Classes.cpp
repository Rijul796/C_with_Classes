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

// class cls{
//     public:
//     int x;
//     cls(){cout<<"default cnststr";};//default constructor
//     cls (int x)
//     {
//         this->x=x;
//         cout<<x<<" "<<this<<" ";
//     }
//     void print()
//     {
//         cout<<"value of x is: "<<x<<" ";
//     }
// };
// int main()
// {
//     cls a(10);
//     cout<<&a;
//     cls *b=new cls(20);//dynamic allocation
//     b->print();
//     cls d;
// }


//derived class

// class Base
// {
//     int data1; // private by default and is not inheritable
// public:
//     int data2;
//     void setData();
//     int getData1();
//     int getData2();
// };

// void Base ::setData(void)
// {
//     data1 = 10;
//     data2 = 20;
// }

// int Base::getData1()
// {
//     return data1;
// }

// int Base::getData2()
// {
//     return data2;
// }

// class Derived : public Base
// { // Class is being derived publically
//     int data3;

// public:
//     void process();
//     void display();
// };

// void Derived ::process()
// {
//     data3 = data2 * getData1();
// }

// void Derived ::display()
// {
//     cout << "Value of data 1 is " << getData1() << endl;
//     cout << "Value of data 2 is " << data2 << endl;
//     cout << "Value of data 3 is " << data3 << endl;
// }
// int main()
// {
//     Derived der;
//     der.setData();
//     der.process();
//     der.display();

//     return 0;
// }
/*

class Base{
    protected:
        int a; 
    private:
        int b;

};

class Derived: protected Base{
   
};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}

*/

// class Student
// {
// protected:
//     int roll_number;

// public:
//     void set_roll_number(int);
//     void get_roll_number(void);
// };

// void Student ::set_roll_number(int r)
// {
//     roll_number = r;
// }

// void Student ::get_roll_number()
// {
//     cout << "The roll number is " << roll_number << endl;
// }
// class Exam : public Student
// {
// protected:
//     float maths;
//     float physics;

// public:
//     void set_marks(float, float);
//     void get_marks(void);
// };

// void Exam ::set_marks(float m1, float m2)
// {
//     maths = m1;
//     physics = m2;
// }

// void Exam ::get_marks()
// {
//     cout << "The marks obtained in maths are: " << maths << endl;
//     cout << "The marks obtained in physics are: " << physics << endl;
// }
// class Result : public Exam
// {
//     float percentage;

// public:
//     void display_results()
//     {
//         get_roll_number();
//         get_marks();
//         cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
//     }
// };
// int main()
// {
//     Result harry;
//     harry.set_roll_number(420);
//     harry.set_marks(94.0, 90.0);
//     harry.display_results();
//     return 0;
// }


// class Base1{
// protected:
//     int base1int;

// public:
//     void set_base1int(int a)
//     {
//         base1int = a;
//     }
// };

// class Base2{
// protected:
//     int base2int;

// public:
//     void set_base2int(int a)
//     {
//         base2int = a;
//     }
// };

// class Base3{
// protected:
//     int base3int;

// public:
//     void set_base3int(int a)
//     {
//         base3int = a;
//     }
// };
// class Derived : public Base1, public Base2, public Base3
// {
//     public: 
//         void show(){
//             cout << "The value of Base1 is " << base1int<<endl;
//             cout << "The value of Base2 is " << base2int<<endl;
//             cout << "The value of Base3 is " << base3int<<endl;
//             cout << "The sum of these values is " << base1int + base2int + base3int << endl;
//         }
// };
// int main()
// {
//     Derived harry;
//     harry.set_base1int(25);
//     harry.set_base2int(5);
//     harry.set_base3int(15);
//     harry.show();
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     int legs;
// };

// class Mammal : virtual public Animal {
// public:
//     Mammal() {
//         legs = 4;
//     }
// };

// class Bird : virtual public Animal {
// public:
//     Bird() {
//         legs = 2;
//     }
// };

// class Bat : public Mammal, public Bird {// the function from the last class will be called i.e bird's 
// public:
//     void showLegs() {
//         cout << "Legs: " << legs << endl;
//     }
// };

// int main() {
//     Bat bat;
//     bat.showLegs();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Base {
// public:
//     void display() {
//         cout << "Display from Base" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void display() {
//         cout << "Display from Derived" << endl;
//     }
// };

// int main() {
//     Base baseObj;
//     Derived derivedObj;

//     Base* ptr;

//     ptr = &baseObj;
//     ptr->display(); // Calls Base's display() - Early Binding

//     ptr = &derivedObj;
//     ptr->display(); // Calls Base's display() - Early Binding

//     Derived* pt;
//     pt=&derivedObj;
//     pt->display();

//     return 0;
//     /*both calls to ptr->display() result in calling the display() function from the Base class,
//      even when ptr points to an object of the Derived class. 
//      This is because the function is resolved based on the pointer's type, not the actual object type.*/
// }

// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual void display() {
//         cout << "Display from Base" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void display() override {
//         cout << "Display from Derived" << endl;
//     }
// };

// int main() {
//     Base baseObj;
//     Derived derivedObj;

//     Base* ptr;

//     ptr = &baseObj;
//     ptr->display(); // Calls Base's display() - Late Binding

//     ptr = &derivedObj;
//     ptr->display(); // Calls Derived's display() - Late Binding

//     Derived* ptr1;
//     ptr1=&derivedObj;
//     ptr1->display();

//     return 0;
// }


// #include <iostream>
// using namespace std;

// // Base class
// class Shape {
// public:
//     // Virtual function
//     virtual void draw() {
//         cout << "Drawing a shape." << endl;
//     }
// };

// // Derived class 1
// class Circle : public Shape {
// public:
//     // Override the virtual function
//     void draw() override {
//         cout << "Drawing a circle." << endl;
//     }
// };

// // Derived class 2
// class Square : public Shape {
// public:
//     // Override the virtual function
//     void draw() override {
//         cout << "Drawing a square." << endl;
//     }
// };

// int main() {
//     // Create objects of base and derived classes
//     Shape shapeObj;
//     Circle circleObj;
//     Square squareObj;

//     // Use the objects and call the virtual function
//     // shapeObj.draw();   // Calls the base class implementation
//     // circleObj.draw();  // Calls the overridden function in Circle class
//     // squareObj.draw();  // Calls the overridden function in Square class

//     // Using pointers to the base class
//     Shape* shapePtr;

//     shapePtr = &shapeObj;
//     shapePtr->draw();   // Calls the base class implementation

//     shapePtr = &circleObj;
//     shapePtr->draw();   // Calls the overridden function in Circle class

//     shapePtr = &squareObj;
//     shapePtr->draw();   // Calls the overridden function in Square class

//     return 0;
// }



// #include <iostream>
// using namespace std;

// // Abstract base class
// class Shape {
// public:
//     // Pure virtual function
//     virtual void draw() = 0;

//     // Normal function
//     void display() {
//         cout << "Displaying shape." << endl;
//     }

//     // Pure virtual function
//     virtual double area() const = 0;
// };

// // Derived class 1
// class Circle : public Shape {
// private:
//     double radius;

// public:
//     Circle(double r) : radius(r) {}

//     // Implementing the pure virtual function
//     void draw() override {
//         cout << "Drawing a circle." << endl;
//     }

//     // Implementing the pure virtual function
//     double area() const override {
//         return 3.14159 * radius * radius;
//     }
// };

// // Derived class 2
// class Square : public Shape {
// private:
//     double side;

// public:
//     Square(double s) : side(s) {}

//     // Implementing the pure virtual function
//     void draw() override {
//         cout << "Drawing a square." << endl;
//     }

//     // Implementing the pure virtual function
//     double area() const override {
//         return side * side;
//     }
// };

// int main() {
//     // Shape shapeObj; // This line will cause a compilation error because Shape is an abstract class

//     Circle circleObj(5.0);
//     Square squareObj(4.0);

//     circleObj.draw();   // Calls the draw() function in Circle class
//     squareObj.draw();   // Calls the draw() function in Square class

//     cout << "Area of circle: " << circleObj.area() << endl;
//     cout << "Area of square: " << squareObj.area() << endl;

//     circleObj.display();   // Calls the display() function from the base class

//     return 0;
// }


// #include <iostream>
// using namespace std;

// // Base class
// class Base {
// public:
//     Base() {
//         cout << "Base constructor" << endl;
//     }

//     virtual ~Base() {
//         cout << "Base destructor" << endl;
//     }
// };

// // Derived class
// class Derived : public Base {
// public:
//     Derived() {
//         cout << "Derived constructor" << endl;
//     }

//     ~Derived() {
//         cout << "Derived destructor" << endl;
//     }
// };

// int main() {
//     Base* basePtr = new Derived(); // Pointer to a Derived object through a Base pointer
//     delete basePtr; // Deleting the object using a pointer to the Base class

//     return 0;
// }



class Item {
private:
    int price, no;
public:
    static int count;
    void set(int x) {
        price = x;
        no = ++count;
    }

    void get(void) {
        cout << "Item number is: " << no << endl;
        cout << "Price of item is: " << price << endl;
    }
};

int Item::count = 0;

int main() {
    int size, price;
    cout << "Enter number of items: ";
    cin >> size;

    Item *arr = new Item[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter price for item number " << Item::count + 1 << ": ";
        cin >> price;
        arr[i].set(price);
    }

    for (int i = 0; i < size; i++) {
        arr[i].get();
    }

    delete[] arr; // Don't forget to release the allocated memory

    return 0;
}

