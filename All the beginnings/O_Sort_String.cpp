#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    getchar();
    char str[size];
    cin.getline(str, size + 1);
    int str_size = strlen(str);
    int arr[size];

    for (int i = 0; i < str_size; i++)
    {
        arr[i] = (int)str[i];
    }

    for (int i = 0; i < str_size - 1; i++)
    {
        for (int j = i + 1; j < str_size; j++)
        {
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < str_size; i++)
    {
        cout << (char)arr[i];
    }

    return 0;
}
