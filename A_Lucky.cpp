#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        string number;
        cin >> number;
        long long int num1 = 0, num2 = 0;
        for (int x = 0; x < number.size(); x++)
        {
            if (number.size() / 2 > x)
            {
                num1 += int(number[x]);
            }
            else
            {
                num2 += int(number[x]);
            }
        }
        if (num1 == num2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
