#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length;
    cin >> length;
    int arr_a[length];
    for (size_t i = 0; i < length; i++)
    {
        cin >> arr_a[i];
    }

    int m;
    cin >> m;
    int arr_b[m];

    for (int i = 0; i < length; i++)
    {
        arr_b[i] = arr_a[i];
    }

    delete[] arr_a;

    for (int i = length; i < m; i++)
    {
        cin >> arr_b[i];
    }

    for (int i = 0; i < m; i++)
    {
        cout << arr_b[i] << " ";
    }

    return 0;
}
