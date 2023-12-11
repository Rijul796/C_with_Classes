#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<list>
using namespace std;

// class base{
//     public:
//     virtual void print()
//     {
//         cout<<"base class !"<<endl;
//     }
// };
// class derived:public base{
//     public:
//     void print()override{
//         cout<<"derived class !";
//     }
// };
// int main()
// {
//     base *obj=new derived;
//     obj->print();
//     return 0;
// }

// bool armstrong(int x)
// {
//     int temp=x;
//     int sum=0;
//     while (temp!=0)
//     {
//         int rem=temp%10;
//         sum+=(rem*rem*rem);
//         temp=temp/10;
//     }
//     return (sum==x);
// }
// int main()
// {
//     int x;
//     cin>>x;
//     cout<<boolalpha<<armstrong(x);
// }

// bool peli(int x)
// {
//     int temp=x;
//     int digit=0;
//     while (temp!=0)
//     {
//         int rem=temp%10;
//         digit=rem+digit*10;
//         temp=temp/10;
//     }
//     return (x==digit);
// }
// int main()
// {
//     int x;
//     cin>>x;
//     cout<<boolalpha<<peli(x);
// }

// int fibonacci(int n)
// {
//     if (n <= 1)
//         return n;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
// int main() {
//     int n;
//     cout << "Enter the number of terms in Fibonacci sequence: ";
//     cin >> n;

//     cout << "Fibonacci Sequence: ";
//     for (int i = 0; i < n; ++i) {
//         cout << fibonacci(i) << " ";
//     }

//     return 0;
// }

// bool anagram(string s,string s1)
// {
//     int x,y;
//     x=s.length();
//     y=s1.length();
//     if (x!=y)
//     {
//         return false;
//     }
//     else
//     {
//         sort(s.begin(),s.end());
//         sort(s1.begin(),s1.end());
//         return (s==s1);
//     }
// }
// int main()
// {
//     string s1,s2;
//     cout<<"enter string s1: ";
//     getline(cin,s1);
//     cout<<"enter string s2: ";
//     getline(cin,s2);
//     if (anagram(s1, s2))
//         cout << "anagram";
//     else
//         cout << "not anagram";
//     return 0;
// }

// class MyClass {
// public:
// static int count;
// MyClass() {
// count++;
// }
// };
// int MyClass::count = 0;
// int main() {
// MyClass obj1, obj2, obj3;
// std::cout << MyClass::count << std::endl;
// return 0;
// }

// class Shape {
// public:
// virtual void draw() {
// std::cout << "Drawing a shape" << std::endl;
// }
// };
// class Circle : public Shape {
// public:
// void draw() override {
// std::cout << "Drawing a circle" << std::endl;
// }
// };
// class Rectangle : public Shape {
// public:
// void draw() override {
// std::cout << "Drawing a rectangle" << std::endl;
// }
// };
// int main() {
// Shape* shapePtr;
// Circle circle;
// Rectangle rectangle;
// shapePtr = &circle;
// shapePtr->draw();
// shapePtr = &rectangle;
// shapePtr->draw();
// return 0;
// }

// class MyClass
// {
// public:
//     MyClass()
//     {
//         std::cout << "Constructor called" << std::endl;
//     }
//     ~MyClass()
//     {
//         std::cout << "Destructor called" << std::endl;
//     }
// };
// int main()
// {
//     MyClass obj1;
//     {
//         MyClass obj2;
//     }
//     MyClass obj3;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void printTwoElements(int arr[], int n)
// {
//     int temp[n] = {}; // Creating temp array of size n with // initial values as 0.
//     int repeatingNumber = -1;
//     int missingNumber = -1;
//     for (int i = 0; i < n; i++)
//     {
//         temp[arr[i] - 1]++;
//         if (temp[arr[i] - 1] > 1)
//         {
//             repeatingNumber = arr[i];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (temp[i] == 0)
//         {
//             missingNumber = i + 1;
//             break;
//         }
//     }
//     cout << repeatingNumber << " " << missingNumber;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int &i : arr)
//         cin >> i;
//     printTwoElements(arr, n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int CountSetBits(int n)
// {
//     if (n == 0)
//         return 0;
//     if ((n & 1) == 1)
//         return 1 + CountSetBits(n >> 1);
//     else
//         return CountSetBits(n >> 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << CountSetBits(n);
//     return 0;
// }

// #include <iostream>

// class Date {
// private:
//     int day;
//     int month;
//     int year;

// public:
//     // Constructor
//     Date(int d, int m, int y) : day(d), month(m), year(y) {}

//     // Member function to set the date
//     void setDate(int d, int m, int y) {
//         day = d;
//         month = m;
//         year = y;
//     }

//     // Member function to get the day
//     int getDay() const {
//         return day;
//     }

//     // Member function to get the month
//     int getMonth() const {
//         return month;
//     }

//     // Member function to get the year
//     int getYear() const {
//         return year;
//     }

//     // Member function to validate if the date is valid
//     bool isValidDate() const {
//         if (month < 1 || month > 12 || day < 1 || day > 31)
//             return false;

//         if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
//             return false;

//         if (month == 2) {
//             if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//                 if (day > 29)
//                     return false;
//             } else {
//                 if (day > 28)
//                     return false;
//             }
//         }

//         return true;
//     }
// };

// int main() {
//     // Create a date object
//     Date date(0, 0, 0);

//     // Set the date
//     int day, month, year;
//     std::cout << "Enter day, month, and year: ";
//     std::cin >> day >> month >> year;

//     date.setDate(day, month, year);

//     // Get and display the date
//     std::cout << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << std::endl;

//     // Validate the date
//     if (date.isValidDate()) {
//         std::cout << "The date is valid." << std::endl;
//     } else {
//         std::cout << "The date is invalid." << std::endl;
//     }

//     return 0;
// }

// int main()
// {
//     int arr[10][10];
//     int r, c;
//     cout << "enter rows and columns: ";
//     cin >> r >> c;
//     if (r != c)
//     {
//         cout << "invalid square matrix";
//     }
//     else
//     {
//         for (int i = 0; i < r; i++)
//         {
//             for (int j = 0; j < c; j++)
//             {
//                 int x;
//                 cin >> x;
//                 arr[i][j] = x;
//             }
//         }
//         cout << "the matrix is " << endl;
//         for (int i = 0; i < r; i++)
//         {
//             for (int j = 0; j < c; j++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//         int sum = 0;
//         for (int i = 0; i < r; i++)
//         {
//             for (int j = 0; j < r; j++)
//             {
//                 if (i == j || j == r - i - 1)
//                 {
//                     sum += arr[i][j];
//                 }
//             }
//         }
//         cout << "sum of diagonal elements is: " << sum;
//     }
// }

int main()
{
    list<int>l;
    int x;
    cout<<"enter size: ";
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        int n;
        cin>>n;
        l.push_back(n);
    }
    l.sort();
    l.unique();
    for(auto i:l)
    {
        cout<<i<<" ";
    }
}