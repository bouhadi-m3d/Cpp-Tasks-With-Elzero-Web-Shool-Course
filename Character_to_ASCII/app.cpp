#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "========================\n";
    cout << "== Character to ASCII ==\n";
    cout << "========================\n";
    cout << "Enter a character: ";
    cin >> character;
    cout << "The ASCII value for the character you have entered is: " << int(character);
    return 0;
}