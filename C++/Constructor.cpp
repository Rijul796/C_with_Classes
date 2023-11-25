#include <iostream>
using namespace std;

// class chr {
//  private:
//   int a;
//   int b;
//  public:
//   chr(int x, int y) {
//     a = x;
//     b = y;
//   }

//   chr(const chr& other) {
//     a = other.a;
//     b = other.b;
//   }

//   void set(int a) { this->a = a; }

//   void get(int a) { cout << a << " " << b << endl; }
// };

// int main() {
//   chr abc(10, 20);
//   chr xyz(abc);
//   return 0;
// }

// class x
// {
//   private:
//   int a,b;
//   public:
//   x(void);
//   void print()
//   {
//     cout<<"A is: "<<a<<" and b is: "<<b<<endl;
//   }
// };
// x::x(void)
// {
//   a=10;
//   b=20;
// }
// int main()
// {
//   x a;
//   a.print();
// }

// class x
// {
//   private:
//   int a,b;
//   public:
//   x(int x,int y);
//   void print()
//   {
//     cout<<"A is: "<<a<<" and b is: "<<b<<endl;
//   }
// };
// x::x(int x,int y)
// {
//   a=x;
//   b=y;
// }
// int main()
// {
//   x a(20,40);//implicit call
//   x b=x(3,2);//explicit call
//   a.print();
//   b.print();
// }

// constructor overloading
// class num
// {
//   int a, b;

// public:
//   num(int x, int y)
//   {
//     a = x;
//     b = y;
//   }
//   num(int x)
//   {
//     a = x;
//     b = 0;
//   }
//   num()
//   {
//     a = 0;
//     b = 0;
//   }
//   void print()
//   {
//     cout << "A is: " << a << " and b is: " << b << endl;
//   }
// };
// int main()
// {
//   num n(10, 20);
//   n.print();
//   num n1(1);
//   n1.print();
//   num n2;
//   n2.print();
// }

// constructor with default arguments
class set
{
  int a, b;

public:
  set(int x, int y = 10)
  {
    a = x;
    b = y;
  }
  void print()
  {
    cout << "A is: " << a << " and b is: " << b << endl;
  }
};
int main()
{
  set x(1);
  x.print();
  set x1(9,2);
  x1.print();

}

// copy constructor
// class set
// {
//   int a;

// public:
//   set()
//   {a = 0;}

//   set(int x)
//   {
//     a = x;
//   }

//   //when there is no user created copy constructor then the compliler will make it's own and execute it in runtime
//   set(set &x)
//   {
//     cout<<"copy constructor"<<endl;
//     a = x.a;
//   }

//   void print()
//   {
//     cout << "A is: " << a << endl;
//   }
// };
// int main()
// {
//   set x,y(10);
//   x.print();
//   y.print();
//   set z(y);//copy cnstrctr called
//   z.print();
//   set a(x);
//   a.print();
//   set b=y;
//   b.print();
// }