#include <iostream>
using namespace std;

int main()
{
    cout << "===================================\n";
    cout << "======= Simple Calculator : =======\n";
    cout << "===================================\n";

    cout << "===================================\n";
    cout << "== Choose your operator symbol : ==\n";
    cout << "== [1]            =>        +    ==\n";
    cout << "== [2]            =>        -    ==\n";
    cout << "== [3]            =>        *    ==\n";
    cout << "== [4]            =>        /    ==\n";
    cout << "== [5]            =>        %    ==\n";
    cout << "===================================\n";

    int num_one, num_two;
    char op;

    cout << "Enter a number: ";
    cin >> num_one;
    cout << "Enter your operator symbol: ";
    cin >> op;
    cout << "Enter another number: ";
    cin >> num_two;

    switch (op)
    {
    case '1':
        cout << num_one << "+" << num_two << " = " << num_one + num_two;
        break;

    case '2':
        cout << num_one << " - " << num_two << " = " << num_one - num_two;
        break;

    case '3':
        cout << num_one << " * " << num_two << " = " << num_one * num_two;
        break;

    case '4':
        cout << num_one << " / " << num_two << " = " << num_one / num_two;
        break;

    case '5':
        cout << num_one << " % " << num_two << " = " << num_one % num_two;
        break;
    default:
        cout << "\nYou typed a wrong symbol !!!\n";
    }

    return 0;
}