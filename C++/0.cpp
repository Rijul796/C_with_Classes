#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <math.h>
using namespace std;
// int main()
// {
//     int arr[]={14,25,32,49,15,6,72,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     reverse(arr,arr+n);
//     cout<<"sorting in desc order";
//     sort(arr,arr+n,greater<int>());
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<"array in asc order: ";
//     sort(arr,arr+n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     vector<int> myVector = {1, 2, 3, 4, 5};
//     bool result = binary_search(myVector.begin(), myVector.end(), 3);//to search for a element

//     cout << "Found: " << boolalpha << result << endl;

//     vector<int> Vector = {1, 2, 3, 2, 4, 2, 5};
//     int occurrences = count(Vector.begin(), Vector.end(), 2);

//     cout << "Occurrences of 2: " << occurrences << endl;

//     auto max=max_element(Vector.begin(),Vector.end());
//     cout << "Maximum Element: " << *max<<endl;
//     auto min=min_element(Vector.begin(),Vector.end());
//     cout << "Maximum Element: " << *min<<endl;

//     cout<<"reversing a vector: ";
//     for(auto i=Vector.rbegin();i!=Vector.rend();i++)//method to reverse a vector
//     {
//         cout<<*i<<" ";
//     }
//     cout<<endl;

//     vector<int> v = {1, 2, 3, 4, 5, 6};
//     cout<<"rotating from left to right: ";
//     rotate( v.begin(),v.begin()+3,v.end());
//     int x=v.size();
//     for (int i = 0; i < x; i++)
//     {
//         cout<<v[i]<<" ";
//     }

//     cout<<endl<<"rotating from right to left: ";
//     rotate( v.begin(),v.end()-3,v.end());
//     for (int i = 0; i < x; i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     auto a=distance(v.begin(),v.end());
//     cout<<"distance between itterators is: "<<a<<endl;

//     vector<int>vec;
//     vec.reserve(10);//used to reserve memory
//     cout<<"capacity of vector is: "<<vec.capacity()<<endl;

//     vector<int> haystack = {1, 2, 3, 4, 5, 6, 7};
//     vector<int> needle = {3, 4, 5};

//     auto it = search(haystack.begin(), haystack.end(), needle.begin(), needle.end());

//     if (it != haystack.end()) {
//         cout << "Found at position: " << distance(haystack.begin(), it) << endl;
//     } else {
//         cout << "Not found" << endl;
//     }

//     list<int> myList = {2, 3, 4};
//     myList.emplace_front(1); // Inserts 1 at the front
//     cout<<"the list is: ";
//     for (const auto& element : myList) {
//         cout << element << " "; // Outputs: 1 2 3 4
//     }
//     cout<<endl;

//     vector<int> vector1 = {1, 2, 3, 4, 5};
//     vector<int> vector2 = {6, 7, 8, 9, 10};

//     swap_ranges(vector1.begin(), vector1.end(), vector2.begin());
//     cout<<"after swaping vector1 becomes:  ";
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<vector1[i]<<" ";
//     }
//     return 0;
// }

// // Base class - Shape
// class Shape {
// public:
//     virtual double area() = 0; // Pure virtual function
//     virtual double perimeter() = 0;
// };
// // Derived class - Rectangle
// class Rectangle : public Shape {
// private:
//     double length;
//     double width;
// public:
//     Rectangle(double l, double w) : length(l), width(w) {}
//     double area() override {
//         return length * width;
//     }
//     double perimeter() override {
//         return 2 * (length + width);
//     }
// };
// // Derived class - Circle
// class Circle : public Shape {
// private:
//     double radius;
// public:
//     Circle(double r) : radius(r) {}
//     double area() override {
//         return 3.14159 * radius * radius;
//     }
//     double perimeter() override {
//         return 2 * 3.14159 * radius;
//     }
// };
// int main() {
//     Shape* shape1 = new Rectangle(4.0, 3.0);
//     Shape* shape2 = new Circle(2.5);
//     cout << "Rectangle Area: " << shape1->area() << endl;
//     cout << "Rectangle Perimeter: " << shape1->perimeter() << endl;
//     cout << "Circle Area: " << shape2->area() << endl;
//     cout << "Circle Perimeter: " << shape2->perimeter() << endl;
//     delete shape1;
//     delete shape2;
//     return 0;
// }

// #include <iostream>
// #include <string>

// class Person {
// private:
//     string name;
//     int age;

// public:
//     // Default constructor with no parameters
//     Person() {
//         name = "Unknown";
//         age = 0;
//     }

//     // Constructor with two parameters
//     Person(const string& n, int a) {
//         name = n;
//         age = a;
//     }

//     // Constructor with only the name parameter
//     Person(const string& n) {
//         name = n;
//         age = 0;  // Age is set to a default value
//     }

//     // Constructor with only the age parameter
//     Person(int a) {
//         name = "Unknown";  // Name is set to a default value
//         age = a;
//     }

//     void displayInfo() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };

// int main() {
//     // Create objects of the Person class using different constructors
//     Person person1;  // Default constructor
//     Person person2("Alice", 25);  // Constructor with name and age
//     Person person3("Bob");  // Constructor with name only
//     Person person4(30);  // Constructor with age only

//     // Access and display object information
//     person1.displayInfo();
//     person2.displayInfo();
//     person3.displayInfo();
//     person4.displayInfo();

//     return 0;
// }

// class Counter {
// public:
//     static int count;  // Static object as a static class member

//     Counter() {
//         count++;
//     }
// };

// int Counter::count = 0;  // Initialize the static member

// int main() {
//     Counter c1, c2, c3;
//     cout << "Count: " << Counter::count << endl;  // Access the static member
//     return 0;
// }

// void demoStaticLocal() {
//     static int staticLocalVar = 0;  // Static local object

//     staticLocalVar++;
//     cout << "Static Local Variable: " << staticLocalVar << endl;
// }

// int main() {
//     demoStaticLocal();
//     demoStaticLocal();
//     return 0;
// }

// void reverseStr(string& s)
// {
//     int n = s.size();
//     char temp;
//     for(int i = 0; i < n/2; i++)
//     {
//         temp = s[i];
//         s[i] = s[n - i - 1];
//         s[n - i - 1] = temp;
//     }
// }

// int main()
// {
//     string s;
//     getline(cin, s);
//     reverseStr(s);
//     cout << s << endl;
//     return 0;
// }

// #include <utility>

// int main() {
//     vector<pair<int, int>> myVector;

//     // Push values into the vector
//     myVector.push_back(make_pair(3, 4));
//     myVector.push_back(make_pair(1, 2));
//     myVector.push_back(make_pair(5, 6));

//     // Display the vector
//     for (const auto& pair : myVector) {
//         cout << "(" << pair.first << ", " << pair.second << ")" << endl;
//     }

//     return 0;
// }

// class Rectangle{
//     private:
//     int length;
//     int breadth;
//     public:
//     void set(int length,int breadth)
//     {
//         this->length=length;
//         this->breadth=breadth;
//     }
//     double area()
//     {
//         return length*breadth;
//     }
//     double perimeter()
//     {
//         return 2*(length+breadth);
//     }
// };
// class display:public Rectangle{
//     public:
//     void show()
//     {
//         cout<<"the area is: "<<area()<<endl;
//         cout<<"perimeter is: "<<perimeter()<<endl;
//     }
// };

// int main()
// {
//     Rectangle r1;
//     r1.set(10.12,12.2);
//     display r;
//     r.set(r1.area(),r1.perimeter());
//     r.show();
// }

// #include <iostream>

// int main() {
//     const int maxSize = 10; // Assuming a maximum size for arrays
//     int arr1[maxSize];
//     int arr2[maxSize];
//     int n, x;

//     cout << "Enter the size of arr1: ";
//     cin >> n;

//     cout << "Enter elements of arr1: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr1[i];
//     }

//     cout << "Enter the size of arr2: ";
//     cin >> x;

//     cout << "Enter elements of arr2: ";
//     for (int i = 0; i < x; i++) {
//         cin >> arr2[i];
//     }

//     int arr[maxSize];
//     int count = 0; // Initialize count to 0

//     // Compare elements of arr1 and arr2
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < x; j++) {
//             if (arr1[i] == arr2[j]) {
//                 arr[count++] = arr1[i];
//                 break; // Break after finding a common element
//             }
//         }
//     }

//     // Output common elements
//     cout << "Common elements: ";
//     for (int i = 0; i < count; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <set>
// #include<algorithm>
// #include <iterator>

// int main() {
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {3, 4, 5, 6, 7};

//     int size1 = sizeof(arr1) / sizeof(arr1[0]);
//     int size2 = sizeof(arr2) / sizeof(arr2[0]);

//     // Create sets from arrays
//     set<int> set1(arr1, arr1 + size1);
//     set<int> set2(arr2, arr2 + size2);

//     // Union of sets
//     set<int> unionSet;
//     set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(unionSet, unionSet.begin()));

//     // Output the union set
//     cout << "Union of arrays: ";
//     for (int value : unionSet) {
//         cout << value << " ";
//     }

//     return 0;
// }

// int main() {
//     const int maxSize = 10; // Assuming a maximum size for arrays
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {3, 4, 5, 6, 7};

//     int size1 = sizeof(arr1) / sizeof(arr1[0]);
//     int size2 = sizeof(arr2) / sizeof(arr2[0]);

//     int unionArray[maxSize * 2];
//     int unionSize = 0;

//     // Copy elements from arr1 to unionArray
//     for (int i = 0; i < size1; ++i) {
//         unionArray[unionSize++] = arr1[i];
//     }

//     // Check and add elements from arr2 that are not already in unionArray
//     for (int i = 0; i < size2; ++i) {
//         bool found = false;
//         for (int j = 0; j < unionSize; ++j) {
//             if (arr2[i] == unionArray[j]) {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             unionArray[unionSize++] = arr2[i];
//         }
//     }

//     // Output the union array
//     cout << "Union of arrays: ";
//     for (int i = 0; i < unionSize; ++i) {
//         cout << unionArray[i] << " ";
//     }

//     return 0;
// }

/*
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> arr;
//     int n,x;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>x;
//         arr.push_back(x);
//     }
//     // sort(arr.begin(),arr.end());
//     int ele=arr[0],count=1;
//     for (int i = 0; i < n; i++)
//     {
//         if (count==0)
//         {
//             ele=arr[i];
//             count=1;
//         }
//         if (ele==arr[i])
//         {
//             count++;
//         }
//         if (ele!=arr[i])
//         {
//             count--;
//         }
//     }
//     cout<<ele;
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int arr[100],size;
    cout<<"enter size of array: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter element for index "<<i+1<<" :  ";
        cin>>arr[i];
    }
    int max_element=0,max_count=0;
    for (int i = 0; i < size; i++)
    {
        int current_element=arr[i];
        int current_count=0;
        for(int j=0;j<size;j++)
        {
            if (arr[j]==current_element)
            {
                current_count++;
            }

        }
        if (current_count > max_count) {
            max_count = current_count;
            max_element = current_element;
        }
    }
    if(max_count==1)
    {
        cout<<"there is no repeated element ! ";
    }
    else{
        cout<<"element "<<max_element<<" is repeated "<<max_count<<" times";}
    return 0;
}*/

// int main()
// {
//     string s;
//     getline(cin,s);
//     int n;
//     cout<<"enter postion to rotate string: ";
//     cin>>n;
//     rotate(s.begin(),s.begin()+n,s.end());
//     cout<<s;
//     return 0;
// }

/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int k;
    vector<vector<int>> a;//2D array
    int n,m;//rows and columns
    cin >> n;
    cin >> m;
    if (m!=n)
    {
        cout<<"this is not a sq matrix";
        exit(0);
    }

    for(int i = 0;i<n;i++)
    {
        vector<int> temp;
        for(int j = 0;j<m;j++)
        {
            cin >> k;
            temp.push_back(k);
        }
        a.push_back(temp);
    }
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if((i==j) || (j==n-i-1))
            {
                sum = sum + a[i][j];
            }
        }
    }
    cout << sum;
    return 0;
}*/

// class chkNumber
// {
// public:
//     double value;
//     chkNumber(double num)

//     {
//         value = num;
//         if (value > 0)
//             cout << value << " is a positive number";
//         else if (value == 0)
//             cout << value << " is neutral";
//         else
//             cout << value << " is a negaive number";
//     }
// };
// int main()
// {
//     double n;
//     cout << "Enter number: ";
//     cin >> n;
//     chkNumber num1(n);
// }

// int main()
// {
//     string str;
//     string vow = "aeiouAEIOU";
//     int vowels = 0;
//     cout << "Enter a string: ";
//     getline(cin, str);
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         for (int v = 0; v <= vow.length(); v++)
//         {
//             if (str[i] == vow[v])
//                 vowels++;
//         }
//     }
//     cout << "No. of vowels: " << vowels;
//     return 0;
// }

// void drawPattern(int r)
// {
//     for (int row = 1; row <= r; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int rows;
//     cout << "Enter number of rows: ";
//     cin >> rows;
//     drawPattern(rows);
//     return 0;
// }


// bool is_palindrome(int number)
// {
//     int original_number = number;
//     int reversed_number = 0;
//     while (number > 0)
//     {
//         int digit = number % 10;
//         reversed_number = reversed_number * 10 + digit;
//         number = number / 10;
//     }
//     return original_number == reversed_number;
// }
// int main()
// {
//     int num;
//     cin >> num;
//     if (is_palindrome(num))
//     {
//         cout << num << " is a palindrome" << endl;
//     }
//     else
//     {
//         cout << num << " is not a palindrome" << endl;
//     }
//     return 0;
// }

// bool areAnagram(string str1, string str2)
// {
//     int n1 = str1.length();
//     int n2 = str2.length();
//     if (n1 != n2)
//         return false;
//     sort(str1.begin(), str1.end());
//     sort(str2.begin(), str2.end());
//     for (int i = 0; i < n1; i++)
//         if (str1[i] != str2[i])
//             return false;
//     return true;
// }
// int main()
// {
//     string str1, str2;
//     cin >> str1 >> str2;
//     if (areAnagram(str1, str2))
//         cout << "anagram";
//     else
//         cout << "not anagram";
//     return 0;
// }

// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int x = sqrt(n);
//     if ((x * x) == n)
//     {
//         cout << "Odd";
//     }
//     else
//         cout << "Even";
// }


int count_stair(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return count_stair(n - 1) + count_stair(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << count_stair(n);
}
