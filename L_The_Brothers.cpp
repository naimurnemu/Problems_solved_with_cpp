#include <bits/stdc++.h>
using namespace std;

string getLastName(string name)
{
    vector<string> str_arr;
    stringstream strss(name);

    string word;
    while (strss >> word)
    {
        str_arr.push_back(word);
    }

    string last_name = str_arr[str_arr.size() - 1];
    return last_name;
}

int main()
{
    string b1, b2;
    getline(cin, b1);
    getline(cin, b2);
    string b1_end = getLastName(b1);
    string b2_end = getLastName(b2);

    if(b1_end == b2_end) {
        cout << "ARE Brothers" << endl;
    } else { 
        cout << "NOT" << endl;
    }

    return 0;
}
