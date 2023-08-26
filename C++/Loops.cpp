#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<i<<endl;
    // }


    // int i=1;
    // while (i <=10)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    

    // int i=1;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while (i<=10);
        

    int x,i=1;
    cout<<"enter the value of x: ";
    cin>>x;
    do
    {
        cout<<x<<"*"<<i<<"="<<setw(2)<<x*i<<endl;
        i++;
    } while (i<=10);
    
    return 0;
}