#include <iostream>
using namespace std;

int main()
{
    int guessNumber = 7;
    int tries = 0;
    int choose;
    cout << "You have three chances to guess the number between 1 and 10: ";
    while (true)
    {
        cin >> choose;
        if (choose == guessNumber)
        {
            cout << "Congratulations " << choose << " the lucky number" << endl;
            break;
        }
        else
        {
            cout << "Sorry wrong number !" << endl;
            tries++;
        }
        if (tries == 3)
        {
            cout << "Sorry no chances left for you !! Hard luck next time" << endl;
            break;
        }
    }

    return 0;
}