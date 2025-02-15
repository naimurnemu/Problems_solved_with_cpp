#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int index = 0; 
    stringstream str_stm(str);
    string word;
    while (str_stm >> word)
    {
        if (word == "Jessica")
        {
            index = 1;
        }
    }
    if (index)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
