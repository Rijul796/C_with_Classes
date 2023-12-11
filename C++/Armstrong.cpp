#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int num;
    int ans = 0;
    cout << "Enter any number: ";
    cin >> num;
    int tmp = num;
    while (tmp != 0)
    {
        int rem = tmp % 10;//returns the remainder
        ans += (rem * rem * rem);
        tmp = tmp / 10;// returns the quitent
    }
    if (ans == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is NOT an Armstrong number." << endl;
    return 0;
}