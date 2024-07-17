#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Type a number: ";
    cin >> num;

    switch (num)
    {
    case 100:
    case 220:
    case 301:
    case 455:
    case 5:
        cout << "Congruts you won an iPhon \n";
        break;
    case 45:
    case 19:
    case 88:
        cout << "Congruts you won an iPad \n";
        break;
    case 11:
    case 55:
    case 99:
        cout << "Congruts you won a Mack Book \n";
        break;
    default:
        cout << "Not your lucky day ^_^";
    }
    return 0;
}