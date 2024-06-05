#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count;
    cin >> count;
    int bit_var = 0;
    for (int i = 0; i < count; i++)
    {
        string str;
        cin >> str;
        int index_plus = str.find("++");
        int index_minus = str.find("--");

        if (index_plus != -1)
        {
            bit_var++;
        }
        if (index_minus != -1)
        {

            bit_var--;
        }
    }

    cout << bit_var;

    return 0;
}
