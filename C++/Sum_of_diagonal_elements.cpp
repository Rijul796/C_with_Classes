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
}