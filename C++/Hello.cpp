#include <iostream>
using namespace std;

// int main()

// {
//     cout<<"hie.. !"<<endl;
//     int x;
//     cout<<"enter value of x: ";
//     cin>>x;
//     cout<<"the value of x is : "<<x<<endl;
//     int a=10;
//     char b='R';
//     float c=6.9;
//     double d = 9.6969;
//     string s ="anshul";
//     cout<<"value of a is "<<a<<"    size of int a is "<<sizeof(a)<<endl;
//     cout<<"value of b is"<<b<<"     size of char b is "<<sizeof(b)<<endl;
//     cout<<"value of c is"<<c<<"     size of float c is "<<sizeof(c)<<endl;
//     cout<<"value of d is "<<d<<"    size of double d is "<<sizeof(d)<<endl;
//     cout<<"string is : "<<s<<"      size of string s is "<<sizeof(s)<<endl;
//     return 0;
// }


//geater of 3 numbers
// int main()
// {
//     int a, b, c;
//     cout << "enter value of a: ";
//     cin >> a;
//     cout << "enter value of b: ";
//     cin >> b;
//     cout << "enter value of c: ";
//     cin >> c;
//     if(a>b && a>c)
//     {
//         cout<<"a is greater than b and c"<<endl;
//     }
//     if(b>a && b>c)
//     {
//         cout<<"b is greater than a and c"<<endl;
//     }
//     if(c>a && c>b)
//     {
//         cout<<"c is greater than a and b"<<endl;
//     }
//     return 0;
// }


//simple calculator
// void add(int a, int b);
// void multi(int a, int b);
// void sub(int a, int b);

// int main()
// {
//     int choice;
//     cout << "1 ADD" << endl;
//     cout << "2 Muti" << endl;
//     cout << "3 Subtract" << endl;
//     do
//     {
//         cout << "enter a choice" << endl;
//         cin >> choice;
//         int a, b;
//         if (choice == 1)
//         {
//             cout << "enter value of a: ";
//             cin >> a;
//             cout << "enter value of b: ";
//             cin >> b;
//             add(a, b);
//         }
//         if (choice == 2)
//         {
//             cout << "enter value of a: ";
//             cin >> a;
//             cout << "enter value of b: ";
//             cin >> b;
//             multi(a, b);
//         }
//         if (choice == 3)
//         {
//             cout << "enter value of a: ";
//             cin >> a;
//             cout << "enter value of b: ";
//             cin >> b;
//             sub(a, b);
//         }
//         if (choice == 4)
//         {
//             cout << "exit";
//             break;
//         }

//     } while (choice != 4);
// }
// void add(int a, int b)
// {
//     cout << a + b << endl;
// }
// void multi(int a, int b)
// {
//     cout << a * b << endl;
// }
// void sub(int a, int b)
// {
//     cout << a - b << endl;
// }

// int main()
// {
//     int x;
//     do
//     {
//         cout<<"enter a num: ";
//         cin>>x;
//     }
//     while (x!=0);
//     return 0;
// }

//check for prime number

// bool isPrime(int n) {
//   if (n <= 1) {
//     return false;
//   }

//   for (int i = 2; i * i <= n; i++) {
//     if (n % i == 0) {
//       return false;
//     }
//   }

//   return true;
// }

// int main() {
//   int n;
//   cout << "Enter a number: ";
//   cin >> n;

//   if (isPrime(n)) {
//     cout << n << " is a prime number." << endl;
//   } else {
//     cout << n << " is not a prime number." << endl;
//   }

//   return 0;
// }


int main()
{
  // const int a =10;
  // const int * ptr=&a;
  // cout<<ptr<<endl;
  // cout<<*ptr<<endl;
  // const int b=100;
  // ptr=&b;//we can reassign address of another constant variable 
  // cout<<ptr<<endl;
  int a=10;
  int const *ptr=&a;
  cout<<ptr<<endl;
  cout<<*ptr<<endl;
  int b=100;
  ptr=&b;
  cout<<ptr<<endl;

}
