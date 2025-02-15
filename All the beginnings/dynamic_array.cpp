#include <bits/stdc++.h>
using namespace std;

int *get_array(int length)
{
    int *arr_int = new int[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr_int[i];
    }

    return arr_int;
}

int main()
{
    int num;
    cin >> num;
    int *arr_point = get_array(num);

    for (int i = 0; i < num; i++)
    {
        cout << arr_point[i] << " ";
    }

    return 0;
}
