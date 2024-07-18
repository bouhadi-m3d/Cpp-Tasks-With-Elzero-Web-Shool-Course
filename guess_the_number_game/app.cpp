#include <iostream>
using namespace std;

int main()
{
    int points = 0;
    int answers[3];

    cout << "Type the missing number in the sequences:\n";

    cout << "Sequence 1:\n";
    cout << "1 | 5 | 10 | 16 | ??\n";
    cout << "Type your answer: ";
    cin >> answers[0];

    cout << "Sequence 2:\n";
    cout << "2 | 4 | 8 | 16 | ??\n";
    cout << "Type your answer: ";
    cin >> answers[1];

    cout << "Sequence 3:\n";
    cout << "1 | 1 | 2 | 3 | ??\n";
    cout << "Type your answer: ";
    cin >> answers[2];

    int sequenses[3][5] = {
        {1, 5, 10, 16, 23},
        {2, 4, 8, 16, 32},
        {1 , 1, 2, 3, 5}
    };

    if (answers[0] == sequenses[0][4])
    {
        points++;
    }

    if (answers[1] == sequenses[1][4])
    {
        points++;
    }
    if (answers[2] == sequenses[2][4])
    {
        points++;
    }
    
    cout << "Your points are: " << points << " from 3";
}