#include <iostream>
#include <vector>
using namespace std;

int exp(int base,int power)
{
    if(power==0)
    {
        return 1;
    }
    if(power==1)
    {
        return base;
    }
    int temp = base;
    for(int i = 0;i<power-1;i++)
    {
        base = base * temp;
    }
    return base;
}

int counter(int a)
{
    int count=0;
    while(a!=0)
    {
        a = a/10;
        count++;
    }
    return count;
}

vector<int> separator(vector<int> a)
{
    vector<int> ans;
    int n = a.size(),digit;
    for(int i = 0;i<n;i++)
    {
        int count = counter(a[i]);
        while(a[i]!=0)
        {
            digit = (a[i])/(exp(10,(count-1)));
            ans.push_back(digit);
            a[i] = (a[i]) % (exp(10,(count-1)));
            count--;
        }
    }
    return ans;
}

int main()
{
    vector<int> input;
    int n,k;
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        cin >> k;
        input.push_back(k);
    }
    vector<int> result = separator(input);
    for(int i = 0;i<result.size();i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
