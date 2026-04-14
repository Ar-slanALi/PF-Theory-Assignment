#include <iostream>
using namespace std;

int main()
{
    int model;
    cout << "Enter model (100, 200, 300): ";
    cin >> model;
    if (model == 300)
        cout << "PIP, Stereo, Remote";
    else if (model == 200)
        cout << "Stereo, Remote";
    else if (model == 100)
        cout << "Remote only";
    return 0;
}