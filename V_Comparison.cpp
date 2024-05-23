#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    char symbol;
    cin >> num1 >> symbol >> num2;

    switch ((int)symbol)
    {
    case 60:
        if (num1 < num2)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
        break;
    case 61:
        if (num1 == num2)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
        break;
    case 62:
        if (num1 > num2)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
        break;

    default:
        cout << "Wrong";
    }
    return 0;
}
