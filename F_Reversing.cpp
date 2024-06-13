#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v_int(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v_int[i];
    }

    int i = 0, j = n-1;
    while (i < j)
    {
        int temp = v_int[i];
        v_int[i] = v_int[j];
        v_int[j] = temp;
        i++;
        j--;
    }

    for(int item: v_int) {
        cout << item << " ";
    }

    return 0;
}
