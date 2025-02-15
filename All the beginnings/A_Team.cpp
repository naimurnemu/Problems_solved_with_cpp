#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count;
    cin >> count;
    int solved = 0;
    for (int i = 0; i < count; i++)
    {
        int Petya, Vasya, Tonya;
        cin >> Petya >> Vasya >> Tonya;
        if ((Petya + Vasya + Tonya) >= 2)
        {
            solved++;
        }
    }

    cout << solved;

    return 0;
}
