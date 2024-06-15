#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> prefix_left(n);
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            prefix_left[i] = prefix_left[i - 1] + v[i];
        }
        else
        {
            prefix_left[i] = v[i];
        }
    }

    vector<int> prefix_right(n);
    for (int i = n - 1; i >= 0; i--)
    {
        if (i != (n - 1))
        {
            prefix_right[i] = prefix_right[i + 1] + v[i];
        }
        else
        {
            prefix_right[i] = v[i];
        }
    }

    int equillibrium = -1;
    if (n == 1)
    {
        equillibrium = 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (prefix_left[i - 1] == prefix_right[i + 1])
        {
            equillibrium = i;
            break;
        }
    }
    cout << equillibrium;
    return 0;
}
