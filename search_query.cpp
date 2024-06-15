#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;

    vector<int> digits(times);
    for (int i = 0; i < times; i++)
    {
        cin >> digits[i];
    }

    int queries;
    cin >> queries;

    sort(digits.begin(), digits.end());

    for (int i = 0; i < queries; i++)
    {
        int checker;
        cin >> checker;
        bool isExist = false;
        int left = 0;
        int right = times - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (digits[mid] == checker)
            {
                isExist = true;
                break;
            }
            else if (digits[mid] < checker)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        if (isExist)
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
