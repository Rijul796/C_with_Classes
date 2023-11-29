#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class x{
    private:
    int a;
    public:
    void set(int a)
    {
        this->a=a;
        cout<<a;
    }
};
int main()
{
    x y;
    y.set(2);
    return 0;
}