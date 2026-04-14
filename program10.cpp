#include <iostream>
using namespace std;

int main()
{
    double mass, weight;
    cout << "Enter mass in kg: ";
    cin >> mass;
    weight = mass * 9.8;
    cout << "Weight: " << weight << " Newtons" << endl;
    if (weight > 1000)
        cout << "Too heavy!";
    else if (weight < 10)
        cout << "Too light!";
    return 0;
}