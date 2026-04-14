#include <iostream>
using namespace std;
int main()
{
    double a, b;
    a = 10;
    b = 10;
    a = a + 0.2;
    if (a > b)
    {
        cout << "a is greater:" << a << endl;
        cout << "b is samller:" << b;
    }
    else if (a < b)
    {
        cout << "a is smaller:" << a << endl;
        cout << "b is larger:" << b;
    }
    else
    {
        cout << "Both numbers are equal";
    }
    return 0;
}