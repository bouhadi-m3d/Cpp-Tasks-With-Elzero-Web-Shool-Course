#include <iostream>
using namespace std;

void calc(int numOne, char op, int numTwo)
{
    cout << "Enter a number: ";
    cin >> numOne;
    cout << "Enter your operator symbol: ";
    cin >> op;
    cout << "Enter another number: ";
    cin >> numTwo;
    if (op == '+')
    {
        cout << numOne << " + " << numTwo << " = ";
        cout << numOne + numTwo << endl;
    }
    else if (op == '-')
    {
        cout << numOne << " - " << numTwo << " = ";
        cout << numOne - numTwo << endl;
    }
    else if (op == '*')
    {
        cout << numOne << " * " << numTwo << " = ";
        cout << numOne * numTwo << endl;
    }
    else if (op == '/')
    {
        cout << numOne << " / " << numTwo << " = ";
        cout << numOne / numTwo << endl;
    }
    else if (op == '%')
    {
        cout << numOne << " % " << numTwo << " = ";
        cout << numOne % numTwo << endl;
    }
    else 
    {
        cout << "Invalid operator !" << endl;
    }
}
int main()
{
    cout << "===================================\n";
    cout << "======= Simple Calculator : =======\n";
    cout << "===================================\n";

    cout << "===================================\n";
    cout << "== Choose your operator symbol : ==\n";
    cout << "== Addition          =>     +    ==\n";
    cout << "== Subtraction       =>     -    ==\n";
    cout << "== Multiplication    =>     *    ==\n";
    cout << "== Divison           =>     /    ==\n";
    cout << "== Modulo            =>     %    ==\n";
    cout << "===================================\n";
    calc(1, ' ', 1);
    return 0;
}