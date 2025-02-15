#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr_a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr_a[i];
    }

    int arr_b[size];
    for (int i = 0; i < size; i++)
    {
        arr_b[i] = arr_a[i];
    }

    int i = 0, j = size - 1;
    while (i < j)
    {
        swap(arr_b[i], arr_b[j]);
        i++;
        j--;
    }

    int is_palindrome = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr_a[i] != arr_b[i])
        {
            is_palindrome = 0;
        }
    }

    if (is_palindrome)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
