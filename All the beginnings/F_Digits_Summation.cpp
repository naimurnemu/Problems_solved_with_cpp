#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int num1, num2;
    cin >> num1 >> num2;

    int digit_1= num1 % 10, digit_2 = num2 % 10;

    int sum = digit_1 + digit_2;
    cout << sum;
    return 0;
}
