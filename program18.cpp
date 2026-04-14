#include <iostream>
using namespace std;

int main()
{
    int choice, months;
    cout << "1. Adult\n2. Child\n3. Senior\n4. Quit\nChoice: ";
    cin >> choice;
    if (choice >= 1 && choice <= 3)
    {
        cout << "Months: ";
        cin >> months;
        if (choice == 1)
            cout << "Total: " << months * 40;
        else if (choice == 2)
            cout << "Total: " << months * 20;
        else
            cout << "Total: " << months * 30;
    }
    return 0;
}