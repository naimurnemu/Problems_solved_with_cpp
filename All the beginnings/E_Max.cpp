#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length;
    cin >> length;
    int max_num = 0;
    for (int i = 0; i < length; i++)
    {
        int num;
        cin >> num;
        max_num = max(max_num, num);
    }
    cout << max_num;

    return 0;
}
