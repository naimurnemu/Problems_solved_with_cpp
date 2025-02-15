#include <bits/stdc++.h>
using namespace std;

void use_vect(int n, int x[], int y[])
{
    vector<int> v_int(y, y + n);

    for (int i = 0; i < n; i++)
    {
        v_int.push_back(x[i]);
    }

    for (int i = 0; i < v_int.size(); i++)
    {
        cout << v_int[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    use_vect(n, a, b);

    return 0;
}
