#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    string item = "EGYPT";
    int index = str.find(item);
    while (index != -1)
    {
        str.replace(index, item.size(), " ");
        index = str.find(item);
    }

    cout << str;

    return 0;
}