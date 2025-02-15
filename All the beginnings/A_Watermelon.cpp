#include <bits/stdc++.h>
using namespace std;

bool checkEven(int num)
{
    if (num <= 2)
        return false;
    return (num % 2 == 0);
}

int main()
{
    int kilos;
    cin >> kilos;
    bool flag = checkEven(kilos);

    flag ? cout << "YES" : cout << "NO";
    return 0;
}