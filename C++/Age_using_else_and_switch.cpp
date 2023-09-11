#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age: ";
    cin>>age;
    // if ((age<18)&&(age>0))
    // {
    //     cout<<"less than 18";
    // }
    // else if (age>18)
    // {
    //     cout<<"greater than 18";
    // }
    // else
    // {
    //     cout<<"invalid";
    // }
    
    // switch case
    switch ((age<18) && (age>=12))//using boolian value
    {
    case 1:
        cout<<"age is < than 18";
        break;
    case 0:
    switch((age>=18) && (age<=60))
    {
    case 1:
        cout<<"age>=18 and <=60";   
        break; 
    case 0:
        cout<<"undefined\n";
        break;
    }
    default :
    cout<<"enter a valid input !";
    break;}
    return 0;
}
