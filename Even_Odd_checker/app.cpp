#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "========================\n";
    cout << "== Even / Odd Checker ==\n";
    cout << "========================\n";
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
        cout << "Your Number " << num << " is Even!\n";
    else 
        cout << "Your Number " << num << " is Odd!\n";
    return 0;
}