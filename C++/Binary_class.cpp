#include<iostream>
#include<string>
using namespace std;
class binary
{
private:
    string str;

public:
    void read(void);
    void check(void);
    void inverted(void);
    void display(void);
};

void binary ::read(void)
{
    cout<<"enter a binary number: ";
    cin>>str;
}

void binary :: check(void)
{
    for (int i = 0; i < str.length(); i++)
    {
       if(str.at(i)!='0' && str.at(i)!='1')
       {
        cout<<"invalid format !"<<endl;
        exit(0);
       }
       else{
        cout<<"ok"<<endl;
        break;
       }
    }
}

void binary :: inverted(void)
{
    for (int i = 0; i < str.length(); i++)
    {
       if(str.at(i)=='0')
       {
        str.at(i)='1';
       }
       else if(str.at(i)=='1')
       {
        str.at(i)='0';
       }
    }
}

void binary :: display (void)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout<<str.at(i);
    }
}

int main()

{
    binary x;
    x.read();
    x.check();
    x.inverted();
    x.display();
    return 0;
}