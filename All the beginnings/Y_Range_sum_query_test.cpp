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
    long long int sum = 0;
    vector<long long int> prefix_arr(n);
    for (int i = 0; i < n; i++)
    {
        sum = sum + v[i];
        prefix_arr[i] = sum;
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        long long int sum;
        if (l > 1)
        {
            sum = prefix_arr[r - 1] - prefix_arr[l - 2];
        } else {
            sum = prefix_arr[r - 1];
        }

        cout << sum << endl;
    }

    return 0;
}