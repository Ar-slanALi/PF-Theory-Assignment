#include <iostream>
using namespace std;

int main()
{
    double sales, comm;
    cout << "Enter sales: ";
    cin >> sales;
    if (sales <= 10000)
        comm = 0.10;
    else if (sales <= 15000)
        comm = 0.15;
    else
        comm = 0.20;
    cout << "Commission: " << sales * comm;
    return 0;
}