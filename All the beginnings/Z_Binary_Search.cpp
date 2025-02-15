#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, query;
    cin >> size >> query;
    vector<int> v_int(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v_int[i];
    }

    sort(v_int.begin(), v_int.end());

    while (query--)
    {
        int exist;
        cin >> exist;
        bool isExist = false;

        int left = 0;
        int right = size - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (v_int[mid] == exist)
            {
                isExist = true;
            }
            if (v_int[mid] > exist)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        if (isExist)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}
