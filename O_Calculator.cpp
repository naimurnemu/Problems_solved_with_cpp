#include <bits/stdc++.h>
using namespace std;

int main()
{
    string exp;
    cin >> exp;

    int opIndx;
    int num1 = 0, num2 = 0;

    for (int i = 0; i < exp.size(); i++)
    {
        if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')
        {
            opIndx = i;
            break;
        }
        else
        {
            int digit = exp[i] - 48;
            num1 = (num1 * 10) + digit;
        }
    }

    for (int i = opIndx + 1; i < exp.size(); i++)
    {
        int digit = exp[i] - 48;
        num2 = (num2 * 10) + digit;
    }

    if (exp[opIndx] == '+')
    {
        cout << num1 + num2;
    }
    if (exp[opIndx] == '-')
    {
        cout << num1 - num2;
    }
    if (exp[opIndx] == '*')
    {
        cout << num1 * num2;
    }
    if (exp[opIndx] == '/')
    {
        cout << num1 / num2;
    }

    return 0;
}
