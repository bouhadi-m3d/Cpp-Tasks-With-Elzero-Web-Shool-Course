#include <iostream>
#include <cctype>
using namespace std;

void sayHello(string msg)
{
    cout << msg << ", ";
}

int main()
{
    string displayName;
    cout << "Enter a user name: ";
    cin >> displayName;
    sayHello("Hello");
    int usrSize = size(displayName);
    
    for (int i; i < usrSize; i++)
    {
        if (islower(displayName[i]) || isupper(displayName[i]))
        {
            cout << char(toupper(displayName[i]));
        }
    }
    return 0;
}