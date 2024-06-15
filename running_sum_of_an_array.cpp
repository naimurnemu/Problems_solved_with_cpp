#include <bits/stdc++.h>
using namespace std;

void set_prefix(vector<int> arr)
{

    vector<int> prefix_arr;

    for (int i = 0; i < arr.size(); i++)
    {
        if (i != 0)
        {
            prefix_arr.push_back(prefix_arr[i - 1] + arr[i]);
        }
        else
        {
            prefix_arr.push_back(arr[i]);
        }
    }

    for(int item: prefix_arr) {
        cout << item << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    set_prefix(v);

    return 0;
}
