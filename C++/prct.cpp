#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;

// int main()
// {
//     int n ,k ,ans=0;
//     cin>>n>>k;
//     int arr[n];
//     for (int &i:arr)
//     {
//         cin>>i;
//     }
//     sort(arr,arr+n);
//     for (int i = 0; i < n; i++)
//     {
//         ans+=(n-(lower_bound(arr+i+1,arr+n,(k+1-arr[i]))-arr));
//     }
//     cout<<ans<<endl;
// }

// int main()
// {
//     int arr[100], arr1[100];
//     int n;
//     cout << "enter size of array: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "enter element of arr for position" << i << " ";
//         cin >> arr[i];
//     }
//     cout << "inserting elements of arr in arr1---" << endl;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         arr1[i] = arr[i];
//     }
//     cout << "printing arr1---" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "element at index " << i << " is: " << arr1[i] << endl;
//     }

//     return 0;
// }

// class student
// {
//     private:
//     int roll;
//     int age;
//     public:
//     static int count;
//     int studentno;
//     void set();
//     void show();
// };
// int student::count;
// void student::set()
// {
//     int x,y;
//     cout<<"enter roll: ";
//     cin>>x;
//     cout<<"enter age: ";
//     cin>>y;
//     roll=x;
//     age=y;
//     studentno=++count;
// }
// void student::show()
// {
//     cout<<"details of student "<<studentno<<" are:----"<<endl;
//     cout<<"rollno is:  "<<roll<<endl;
//     cout<<"age is:  "<<age<<endl;
// }
// int main()
// {
//     int n;
//     cout<<"enter number of students: ";
//     cin>>n;
//     student x[n];
//     for (int i = 0; i < n; i++)
//     {
//         x[i].set();
//     }
//     for (int i = 0; i < n; i++)
//     {
//         x[i].show();
//     }
//     return 0;
// }

int main()
{
    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<s;
}