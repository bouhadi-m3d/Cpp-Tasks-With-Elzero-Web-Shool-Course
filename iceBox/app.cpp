#include <array>
#include <iostream>
using namespace std;

void iceBox(string item) 
{
    cout << "Type an item: ";
    cin >> item;
    if (item == "Water")
    {
        cout << item << " will be more cold \n";
    }
    else if (item == "Apple")
    {
        cout << item << " will be more fresh\n";
    }
    else if (item == "Juice")
    {
        cout << item<< " will be more sweet\n";
    }
    else 
    {
        cout << item << " is invalid item\n";
    }
}

int main()
{
   iceBox("");
   iceBox("");
   iceBox("");
   iceBox("");
   iceBox("");
   return 0;
}