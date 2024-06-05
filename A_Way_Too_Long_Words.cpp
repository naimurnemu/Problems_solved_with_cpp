#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        string long_str;
        cin >> long_str;
        if (long_str.size() > 10)
        {
            cout << long_str.front() << long_str.size() - 2 << long_str.back() << endl;
        } else {
            cout << long_str << endl;
        }
    }

    return 0;
}
