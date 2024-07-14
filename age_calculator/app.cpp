#include <iostream>
using namespace std;

int main()
{
    cout << "===================================\n";
    cout << "== Calculate Your Age Applcation ==\n";
    cout << "===================================\n";

    int age;

    cout << "How Old Are You: ";
    cin >> age;

    int age_in_days = age * 365;
    int age_in_hours = age_in_days * 24;
    int age_in_minutes = age_in_hours * 60;
    int age_in_seconds = age_in_minutes * 60;

    cout << "Your Age In Days Is: " << age_in_days << " Days\n";
    cout << "Your Age In Hours Is: " << age_in_hours << " Hours\n";
    cout << "Your Age In Minutes Is: " << age_in_minutes << " Minutes\n";
    cout << "Your Age In Seconds Is: " << age_in_seconds << " Seconds\n";

    return 0;
}