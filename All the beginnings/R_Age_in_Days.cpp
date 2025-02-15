#include <bits/stdc++.h>
using namespace std;

int main()
{
    int total_days;
    cin >> total_days;

    int years = 0, months = 0, days = 0;
    if (total_days / 365)
    {
        years = total_days / 365;
        total_days = total_days % 365;
    }
    if (total_days / 30)
    {
        months = total_days / 30;
        total_days = total_days % 30;
    }
    if (total_days > 0)
    {
        days = total_days;
    }

    cout << years << " years" << endl << months << " months" << endl << days << " days" << endl;

    return 0;
}
