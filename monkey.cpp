#include <bits/stdc++.h>

using namespace std;

int main()
{

    char str[100001];

    while (cin.getline(str, 100001))
    {
        int size = strlen(str);
        int arr[size];

        for (int i = 0; i < size; i++)
        {

            arr[i] = (int)str[i];
        }
        sort(arr, arr + size);
        for (int i = 0; i < size; i++)
        {
            if (arr[i] >= 97 && arr[i] <= 122)
            {
                cout << (char)arr[i];
            }
        }
        cout << endl;
    }

    return 0;
}
