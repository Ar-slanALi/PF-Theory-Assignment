#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Geometry Calculator\n1. Circle\n2. Rectangle\n3. Triangle\nEnter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Area: " << 3.14159 * r * r;
    }
    else if (choice == 2)
    {
        double l, w;
        cout << "Enter length & width: ";
        cin >> l >> w;
        cout << "Area: " << l * w;
    }
    else if (choice == 3)
    {
        double b, h;
        cout << "Enter base & height: ";
        cin >> b >> h;
        cout << "Area: " << b * h * 0.5;
    }
    return 0;
}