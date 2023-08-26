#include <iostream>
#include<string.h>
using namespace std;
class cars
{
    int model_no;
    char brand[100];
    int price;

public:
    void model(int x)
    {
        model_no = x;
        cout << "model of car is: " << model_no << endl;
    }
    void name()
    {
        char y[100];
        cout << "enter the brand name: ";
        cin >> y;
        strcpy(brand,y);
        cout << "name of car is: " << brand << endl;
    }
    void cost(int a)
    {
        price = a;
        cout << "price of car is: " << price << endl;
    }
    friend void show(cars x);
};
void show(cars honda)
{
    cout << "model number of car is: " << honda.model_no << endl;
}
int main()

{
    cars honda;
    honda.cost(2500000);
    honda.name();
    honda.model(2024);
    show(honda);
    return 0;
}