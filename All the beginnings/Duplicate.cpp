#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> int_v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> int_v[i];
    }

    bool isDuplicate = false;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (int_v[i] == int_v[j])
            {
                isDuplicate = true;
                break;
            }
        }
    }

    isDuplicate ? cout << "YES" : cout << "NO";

    return 0;
}
