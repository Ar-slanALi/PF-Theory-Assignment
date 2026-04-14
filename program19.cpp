#include <iostream>
using namespace std;

int main()
{
    int pkg;
    double gb, total;
    cout << "Package (1-3) & GB used: ";
    cin >> pkg >> gb;
    if (pkg == 1)
    {
        total = 39.99;
        if (gb > 4)
            total += (gb - 4) * 10;
    }
    else if (pkg == 2)
    {
        total = 59.99;
        if (gb > 8)
            total += (gb - 8) * 5;
    }
    else
    {
        total = 69.99;
    }
    cout << "Total Due: $" << total;
    return 0;
}