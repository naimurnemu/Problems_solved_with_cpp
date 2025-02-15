#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    vector<int> leftSums(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (i != 0)
        {
            leftSums[i] = leftSums[i - 1] + arr[i - 1];
        }
        else
        {
            leftSums[i] = 0;
        }
    }

    for (int item : leftSums)
    {
        cout << item << " ";
    }

    return 0;
}
