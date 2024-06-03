#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int length;
        cin >> length;

        string str;
        cin >> str;

        int arr[26] = {0};
        for (int j = 0; j < length; j++)
        {
            arr[str[j] - 'A']++;
        }

        int count = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] > 0)
            {
                count += arr[i] + 1;
            }
        }

        cout << count << endl;
    }

    return 0;
}
