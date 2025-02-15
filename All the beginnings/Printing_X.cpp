#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length;
    cin >> length;
    for (int i =1; i <= length; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            if (i == j)
            {
                if ((length / 2 + length % 2) == i)
                {
                    cout << "X";
                }
                else
                {
                    cout << "\\";
                }
            }
            else if ((length + 1) == (i + j))
            {
                cout << "/";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
