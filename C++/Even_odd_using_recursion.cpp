#include <iostream>
using namespace std;
void odd(int);
void even(int n)
{
    if (n > 10)
    {
        return;
    }
    else
    {
        cout << n - 1 << " ";
        odd(n + 1);
    }
}
void odd(int n)
{
    if (n > 10)
    {
        return;
    }
    else
    {
        cout << n + 1 << " ";
        even(n + 1);
    }
}
int main()
{
    odd(1);
}

// void fun()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         int x;
//         if (i%2==0)
//         {
//             x=i;
//             cout<<" "<<x;
//             if (x%2!=0)
//             {
//                 x=i;
//             }
//             cout<<" "<<x-1;
//         }

//     }
// }
// int main()
// {
//     fun();
//     return 0;
// }