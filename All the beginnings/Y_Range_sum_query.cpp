#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> prefix_arr(n);
    for (int i = 0; i < n; i++)
    {
        if(i!=0) {
            prefix_arr[i] = prefix_arr[i-1] + v[i];
        } else {
            prefix_arr[i] = v[i];
        }
    }
    

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        long long int sum;
        if (l > 0)
        {
            sum = prefix_arr[r] - prefix_arr[l - 1];
        }
        else
        {
            sum = prefix_arr[r];
        }

        cout << sum << endl;
    }

    return 0;
}