#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter two number " << endl;
    cin >> x >> y;
    if (x > y)
    {
        cout << "x is greater:" << x << endl;
        cout << "y is smallest" << y;
    }
    else if (x < y)
    {
        cout << "x is smallest:" << x << endl;
        cout << "y is greater:" << y;
    }
    else
    {
        cout << "Both numbers are equal";
    }
    return 0;
}