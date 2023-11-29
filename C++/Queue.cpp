#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    int n,x;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        q.push(x);
    }
    q.pop();
    cout<<"the size is: "<<q.size()<<endl;
    if (q.empty())
    {
        cout<<"q s empty"<<endl;
    }
    while (q.size()>0)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;
}