#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "1. Noise Canceling\n2. Wireless\n3. Wired\nChoice: ";
    cin >> choice;
    if (choice == 1)
        cout << "Price: 249.00";
    else if (choice == 2)
        cout << "Price: 199.00";
    else if (choice == 3)
        cout << "Price: 49.00";
    return 0;
}