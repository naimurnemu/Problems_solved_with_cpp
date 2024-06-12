#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v_int(5);
    for (int i = 0; i < v_int.size(); i++)
    {
        v_int[i] = n;
    }

    for (int dgt : v_int)
    {
        cout << dgt << " ";
    }

    return 0;
}
