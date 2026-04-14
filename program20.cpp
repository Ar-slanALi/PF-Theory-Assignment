#include <iostream>
using namespace std;

int main()
{
    long seconds;
    cout << "Enter seconds: ";
    cin >> seconds;
    if (seconds >= 86400)
        cout << "Days: " << seconds / 86400.0 << endl;
    if (seconds >= 3600)
        cout << "Hours: " << seconds / 3600.0 << endl;
    if (seconds >= 60)
        cout << "Minutes: " << seconds / 60.0 << endl;
    return 0;
}