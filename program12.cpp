#include <iostream>
using namespace std;

int main()
{
    double income;
    int years;
    cout << "Enter income & years: ";
    cin >> income >> years;
    if (income >= 35000 && years > 5)
        cout << "Qualified";
    else
        cout << "Not Qualified";
    return 0;
}