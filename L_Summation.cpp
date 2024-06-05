#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int size, int iterate)
{
    int result = 0;
    if (size == iterate)
        return result;
    return arr[iterate] + sum(arr, size, ++iterate);
}

int main()
{
    int size;
    cin >> size;
    int arr_int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr_int[i];
    }
    int sum_of_arr = sum(arr_int, size, 0);
    cout << sum_of_arr;

    return 0;
}
