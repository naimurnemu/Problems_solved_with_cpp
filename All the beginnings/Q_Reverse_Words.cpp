#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    string word;
    stringstream strstm(str);
    while (strstm >> word)
    {
        reverse(word.begin(), word.end());
        (strstm.peek() == EOF) ? cout << word : cout << word << " ";
    }

    return 0;
}