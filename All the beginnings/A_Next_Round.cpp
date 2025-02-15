#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, score;
    cin >> size >> score;
    int arr[size];
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > score)
        {

            count++;
        }
    }

    if (count == 0)
    {
        for (int i = 0; i < size; i++)
        {

            if (arr[i] > 0)
            {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}
