#include <iostream>
using namespace std;

int main()
{
    double balance, fees = 10;
    int checks;
    cout << "Balance & checks: ";
    cin >> balance >> checks;
    if (balance < 400)
        fees += 15;
    if (checks < 20)
        fees += checks * 0.10;
    else if (checks < 40)
        fees += checks * 0.08;
    else if (checks < 60)
        fees += checks * 0.06;
    else
        fees += checks * 0.04;
    cout << "Total fees: " << fees;
    return 0;
}