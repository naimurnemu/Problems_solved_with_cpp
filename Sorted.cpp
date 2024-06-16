#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;

    for (int i = 0; i < times; i++)
    {
        int length;
        cin >> length;

        vector<int> main(length);
        for (int i = 0; i < length; i++)
        {
            cin >> main[i];
        }

        vector<int> sorted(main);
        sort(sorted.begin(), sorted.end());

        if(main == sorted) {
            cout << "YES"<< endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
