#include <iostream>
using namespace std;

int main()

{
    int a[100];
    int n;
    cout << "enter length of array: ";
    cin >> n;
    cout << "enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[count++] = a[i];
        }
    }

    for (int i = count; i < n; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
