#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size_1, size_2;
    queue<int> q1, q2;
    
    cin >> size_1;
    for (int i = 0; i < size_1; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
    }

    cin >> size_2;
    for (int i = 0; i < size_2; i++)
    {
        int y;
        cin >> y;
        q2.push(y);
    }

    queue<int> mergedQ;

    while (!q1.empty())
    {
        mergedQ.push(q1.front());
        q1.pop();
    }

    while (!q2.empty())
    {
        mergedQ.push(q2.front());
        q2.pop();
    }

    while (!mergedQ.empty())
    {
        cout << mergedQ.front() << " ";
        mergedQ.pop();
    }

    return 0;
}
