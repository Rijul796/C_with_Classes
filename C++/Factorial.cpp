// #include<iostream>
// using namespace std;

// int factorial(int a)
// {
//     int fact=1;
//     for (int i = 1; i <= a; i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }

// int main()

// {
//     int x;
//     cout<<"enter a number: ";
//     cin>>x;
//     cout<<"the factorial of "<<x<<" is: "<<factorial(x);
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int factorial(int n) {
//   if (n == 0 || n == 1) {
//     return 1;
//   } else {
//     return n * factorial(n - 1);
//   }
// }

// int main() {
//   int num;
//   cout << "Enter a number: ";
//   cin >> num;

//   int fact = factorial(num);

//   cout << "The factorial of " << num << " is " << fact << endl;

//   return 0;
// }

#include <iostream>
#include <string.h>
using namespace std;

void name()
{
  string name;
  cin >> name;
  cout << name;
}

int main()
{
  name();
  return 0;
}