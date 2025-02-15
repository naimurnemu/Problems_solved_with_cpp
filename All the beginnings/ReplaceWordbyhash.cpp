#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        string str, searchAble;
        cin >> str >> searchAble;
        int findIndex = str.find(searchAble);
        while (str.find(searchAble) != -1)
        {
            str.replace(findIndex, searchAble.size(), "#");
            findIndex = str.find(searchAble);
        }
        cout << str << endl;
    }

    return 0;
}
