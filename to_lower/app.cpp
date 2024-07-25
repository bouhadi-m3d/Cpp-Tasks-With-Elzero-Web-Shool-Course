#include <iostream>
#include <cctype>
using namespace std;

void sayHello(string msg)
{
    cout << msg << ", ";
}

int main()
{
    string username;
    cout << "Enter a user name: ";
    cin >> username;
    sayHello("Hello");
    int usrSize = size(username);
    
    for (int i; i < usrSize; i++)
    {
        if (islower(username[i]) || isupper(username[i]))
        {
            cout << char(tolower(username[i]));
        }
    }
    return 0;
}