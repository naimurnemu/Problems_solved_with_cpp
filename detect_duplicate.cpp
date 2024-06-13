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

    int exist;
    cin >> exist;

    bool flag = false;
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (v_int[mid] == exist)
        {
            flag = true;
            break;
        }
        else if (v_int[mid] > exist)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    if(flag) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}
