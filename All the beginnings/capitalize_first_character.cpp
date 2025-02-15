#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<string> v_str(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v_str[i];
    }
    for(string str: v_str) {
        str[0] = (int)str[0] - 32;
        cout << str << endl;
    }

    return 0;
}
