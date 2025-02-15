#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length;
    cin >> length;
    int arr_int[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr_int[i];
    }

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr_int[i] > arr_int[j])
                swap(arr_int[i], arr_int[j]);
        }
    }

    for (int i = 0; i < length; i++)
    {
        cout << arr_int[i] << " ";
    }

    return 0;
}
