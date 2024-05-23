#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, result;
    char symbol, sign;
    cin >> num1 >> symbol >> num2 >> sign >> result;

    switch ((int)symbol)
    {
    case 43:
        if ((num1 + num2) == result)
        {
            cout << "Yes";
        }
        else
        {
            cout << (num1 + num2);
        }
        break;
    case 45:
        if ((num1 - num2) == result)
        {
            cout << "Yes";
        }
        else
        {
            cout << (num1 - num2);
        }
        break;
    case 42:
        if ((num1 * num2) == result)
        {
            cout << "Yes";
        }
        else
        {
            cout << (num1 * num2);
        }
        break;

    default:
        cout << "";
    }
    return 0;
}
