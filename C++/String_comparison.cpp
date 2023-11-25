#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool check(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }
    else
    {
        string sorted_a = a;
        string sorted_b = b;
        sort(sorted_a.begin(), sorted_a.end());
        sort(sorted_b.begin(), sorted_b.end());
        return(sorted_a==sorted_b);
    }
}
int main()
{
    string str, str1;
    cin >> str;
    cout << "enter str1: ";
    cin >> str1;
    if (check(str,str1))
    {
        cout<<"true";
    }
    else
    {
    cout<<"false";
    }
    return 0;
}