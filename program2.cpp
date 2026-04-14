#include <iostream>
using namespace std;
int main()
{
    int temp;
    cout << "Enter the Temperature: ";
    cin >> temp;
    if (temp >= -50 && temp <= 150)
    {
        cout << "The number is valid";
    }
    return 0;
}