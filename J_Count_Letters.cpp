#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> v_char;
    for (int i = 0; i < 26; i++)
    {
        v_char.push_back(0);
    }

    for (int i = 0; i < str.size(); i++)
    {
        v_char[str[i] - 'a']++;
    }

    for (int i = 0; i < v_char.size(); i++)
    {
        if (v_char[i] > 0)
        {
            char chr = 'a' + i;
            cout << chr << " : " << v_char[i] << endl;
        }
    }

    return 0;
}
