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