#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// class sum
// {
// public:
//     int a;
//     int b;
//     void operator+(sum &obj)
//     {
//         int val1 = this->a;
//         int val2 = obj.a;
//         cout<< val2 - val1 ;
//     }
// };
// int main()
// {
//     sum ob1,ob2;
//     ob1.a=4;
//     ob2.a=6;
//     ob1+ob2;
// }

// class complex{
//     public:
//     int real;
//     int imag;
//     complex(){};
//     complex(int x,int y)
//     {
//         real=x;
//         imag=y;
//     }
//     complex operator+ (const complex &obj)const
//     {
//         complex result;
//         result.real=real+obj.real;
//         result.imag=imag+obj.imag;
//         cout<<result.real<<" + "<<result.imag<<"i "<<endl;
//         return result;
//     }
// };

// int main()
// {
//     complex c1(2,4);
//     complex c2(1,3);
//     complex c3;
//     c3=c1+c2;
// }


// class complex
// {
//     int real;
//     int imag;

// public:
//     complex(){};
//     complex(int x, int y)
//     {
//         real = x;
//         imag = y;
//     }
//     complex operator+(const complex &obj) const
//     {
//         complex sum_s;
//         sum_s.real = real + obj.real;
//         sum_s.imag = imag + obj.imag;
//         cout << sum_s.real << " + " << sum_s.imag << "i " << endl;
//         return sum_s;
//     }
//     complex operator-(const complex &obj) const
//     {
//         complex sub_s;
//         sub_s.real = real - obj.real;
//         sub_s.imag = imag - obj.imag;
//         if (imag < obj.imag)
//         {
//             cout << sub_s.real << " " << sub_s.imag << "i " << endl;
//         }
//         else
//             cout << sub_s.real << " + " << sub_s.imag << "i " << endl;
//         return sub_s;
//     }
//     complex operator*(const complex &other) const
//     {
//         complex product;
//         product.real = (real * other.real) - (imag * other.imag);
//         product.imag = (real * other.imag) + (imag * other.real);
//         cout << product.real << " + " << product.imag << "i " << endl;
//         return product;
//     }
// };
// int main()
// {
//     complex a(2, 4), b(4, 6), c;
//     c = a + b;
//     c = a - b;
//     c = a * b;
// }

class Number
{
public:
    double num;
    Number(double num)
    {
        this->num = num;
    }

    Number operator+(const Number &other) const
    {
        return Number(num - other.num);
    }
};

int main()
{
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    Number n1(num1);
    Number n2(num2);

    Number result = n1 + n2;
    cout << result.num;

    return 0;
}