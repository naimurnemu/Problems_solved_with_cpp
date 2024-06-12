#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + size);

    for (int item : v)
    {
        cout << item << " ";
    }
    return 0;
}
