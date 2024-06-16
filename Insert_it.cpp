#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> array_a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array_a[i];
    }

    int m;
    cin >> m;
    vector<int> array_b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> array_b[i];
    }

    int index;
    cin >> index;
    array_a.insert(array_a.begin()+ index, array_b.begin(), array_b.end());

    for(int el: array_a) {
        cout << el << " ";
    }
    
    return 0;
}
