#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    cout << "Enter two numbers:" << endl;
    cin >> num1 >> num2;
    if (num2 != 0)
    {
        double result = num1 / num2;
        cout << "The result of division is:" << result;
    }
    else
    {
        cout << "Division by zero is not possible";
    }
    return 0;
}
