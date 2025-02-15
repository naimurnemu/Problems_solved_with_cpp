#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v_int(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v_int[i];
    }
    int old_val, new_val, find_val;
    cin >> old_val >> new_val >> find_val;
    auto findIt = find(v_int.begin(), v_int.end(), 5);

    int index;
    for (int i = 0; i < n; i++)
    {
        if (v_int[i] == *findIt)
        {
            index = i;
            break;
        }
    }

    replace(v_int.begin(), v_int.end(), 2, 9);

    for(int item: v_int) {
        cout << item << " ";
    }
    cout << endl;
    cout << index << endl;

    return 0;
}
