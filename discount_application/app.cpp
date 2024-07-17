#include <iostream>
using namespace std;

int main()
{
    int price = 100;
    int discount = 15;
    int years;

    cout << "Type the number of years you have been working in our company: ";
    cin >> years;

    switch (discount)
    {
    case 1:
        discount = 25;
        break;
    case 2:
        discount = 40;
        break;
    case 3:
        discount = 50;
        break;
    }
    cout << "The price is: " << price - discount << "$\n";
    return 0;
}