#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    float num1 = n1 * 1.00;
    float num2 = n2 * 1.00;

    cout << "floor " << num1 << " / " << num2 << " = " << floor(num1 / num2) << endl;
    cout << "ceil " << num1 << " / " << num2 << " = " << ceil(num1 / num2) << endl;
    cout << "round " << num1 << " / " << num2 << " = " << round(num1 / num2) << endl;

    return 0;
}
