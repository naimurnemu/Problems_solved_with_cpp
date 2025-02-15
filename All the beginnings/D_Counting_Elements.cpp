#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> v_int(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v_int[i];
    }
    
    int count = 0;
    for (int item : v_int)
    {
        auto it = find(v_int.begin(), v_int.end(), item + 1);
        if(it != v_int.end()) count++;
    }

    cout << count;

    return 0;
}
