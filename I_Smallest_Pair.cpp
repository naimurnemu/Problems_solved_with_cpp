#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        int smallest = arr[0] + arr[1] + 1;
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                smallest = min(arr[i] + arr[j] + (j - i), smallest);
            }
        }
        (i != times - 1) ? cout << smallest << endl : cout << smallest;
    }

    return 0;
}
