#include <iostream>
using namespace std;

int main()
{
    cout << "=======================\n";
    cout << "== User Rank Checker ==\n";
    cout << "=======================\n";
    int score;
    cout << "Enter your score: ";
    cin >> score;
    if (score > 0 && score <= 500)
    {
        cout << "Not bad";
    }
    else if (score > 500 && score <= 1000)
    {
        cout << "Good score";
    }
    else if (score > 1000)
    {
        cout << "You are Dragon <3 ";
    }
    else
    {
        cout << "You are not ranked !!!";
    }
    return 0;
}