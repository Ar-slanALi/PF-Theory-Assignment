#include <iostream>
using namespace std;

int main()
{
    int m, d, y;
    cout << "Enter month, day, 2-digit year: ";
    cin >> m >> d >> y;
    if (m * d == y)
        cout << "Magic Date";
    else
        cout << "Not Magic";
    return 0;
}