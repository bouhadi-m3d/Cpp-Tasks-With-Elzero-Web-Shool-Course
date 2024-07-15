#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "========================\n";
    cout << "== ASCII To Character ==\n";
    cout << "========================\n";
    cout << "Enter an ASCII number: ";
    cin >> num;
    cout << "The charcter for the ASCII number you have entered is: " << char(num);
    return 0;
}