#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    string word;
    int count = 0;
    stringstream strstm(str);
    while (strstm >> word)
    {
        int hasAlpha = 0;
        for (char cr : word)
        {
            if ((cr >= 65 && cr <= 90) || cr >= 97 && cr <= 122)
            {
                hasAlpha = 1;
            }
        }
        if (hasAlpha)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

