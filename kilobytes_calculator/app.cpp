#include <iostream>
using namespace std;

int main()
{
    int kilobytes;
    cout << "Enter A Number Of Kilobytes: ";
    cin >> kilobytes;
    int bytes = kilobytes * 1024;
    int bits = bytes * 1024;11
    cout << "The Number Of Kilobytes That You Entered Is: " << kilobytes << "\n";
    cout << "The Number In Bytes Is: " << bytes << "\n";
    cout << "The Number In Bits Is: " << bits << "\n";
    return 0;
}