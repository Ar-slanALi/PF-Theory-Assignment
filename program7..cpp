#include <iostream>
#include <string>
using namespace std;

int main()
{
    string r1, r2, r3;
    double t1, t2, t3;

    cout << "Enter name and time for Runner 1: ";
    cin >> r1 >> t1;
    cout << "Enter name and time for Runner 2: ";
    cin >> r2 >> t2;
    cout << "Enter name and time for Runner 3: ";
    cin >> r3 >> t3;

    if (t1 < t2 && t1 < t3)
    {
        cout << "1st: " << r1 << endl;
        if (t2 < t3)
        {
            cout << "2nd: " << r2 << "\n3rd: " << r3;
        }
        else
        {
            cout << "2nd: " << r3 << "\n3rd: " << r2;
        }
    }
    else if (t2 < t1 && t2 < t3)
    {
        cout << "1st: " << r2 << endl;
        if (t1 < t3)
        {
            cout << "2nd: " << r1 << "\n3rd: " << r3;
        }
        else
        {
            cout << "2nd: " << r3 << "\n3rd: " << r1;
        }
    }
    else
    {
        cout << "1st: " << r3 << endl;
        if (t1 < t2)
        {
            cout << "2nd: " << r1 << "\n3rd: " << r2;
        }
        else
        {
            cout << "2nd: " << r2 << "\n3rd: " << r1;
        }
    }
    return 0;
}