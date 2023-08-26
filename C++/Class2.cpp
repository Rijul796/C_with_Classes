#include <iostream>
#include <string.h>
using namespace std;

class shop
{
    int itemid[10];
    int itemprice[10];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void getprice();
    void displayprice();
};

void shop ::getprice(void)
{
    cout << "entre id for item number " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter price of item: " << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()

{
    shop dukan;
    dukan.initcounter();
    dukan.getprice();
    dukan.displayprice();
    return 0;
}