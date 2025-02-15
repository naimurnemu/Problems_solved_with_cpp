#include <bits/stdc++.h>

using namespace std;

int *sort_it(int n)
{
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<int>());
    return arr;
}

int main()
{
    int size;
    cin >> size;
    int * arr = sort_it(size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}