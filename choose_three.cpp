#include <bits/stdc++.h>

using namespace std;

int choose_three()
{
    int flag = 0, size, sum;
    cin >> size >> sum;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size - 2; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    flag = 1;
                }
            }
        }
    }
    return flag;
}

int main()
{
    int times;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        int result = choose_three();
        if (result)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
