#include<iostream>
#include<math.h>
using namespace std;
class point 
{
    int x,y;
public:
point(int a,int b)
{
    x=a;
    y=b;
}
void show()
{
    cout<<"the points are: "<<x<<" and "<<y<<endl;
}
friend int dist(point ,point );
};
int dist(point p1,point p2)
{
    int a,b;
    a=p2.x-p1.x;
    b=p2.y-p1.y;
    return sqrt((a*a)+(b*b));
}
int main()

{
    point p1(2,2);
    p1.show();
    point p2(10,4);
    p2.show();
    int x=dist(p1,p2);
    cout<<x;
    return 0;
}