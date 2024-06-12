#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> v_int;
    for (int i = 1; i <= n; i++)
    {
        v_int.push_back(i);
    }

    for(int dgt: v_int) {
        cout << dgt << " ";
    }
    
    return 0;
}
