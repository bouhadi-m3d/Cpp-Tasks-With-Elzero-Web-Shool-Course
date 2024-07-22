#include <iostream>
using namespace std;
int main()
{
    int vals[5];
    int inp;
    cout << "Type five numbers to revers:\n";


    for (int i = 4; i > -1; i--)
    {
        cin >> inp;
        vals[i] = inp;
    }
    cout << "\n===============================\n";
    for (int i = 0; i < 5; i++)
    {
        cout << vals[i] << endl;
    }
    return 0;
}