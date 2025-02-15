#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int times;
  cin >> times;

  queue<string> q;
  for (int i = 0; i < times; i++)
  {
    int type;
    cin >> type;
    if (type == 0)
    {
      string str;
      cin >> str;
      q.push(str);
    }
    else
    {
      if (!q.empty())
      {
        cout << q.front() << endl;
        q.pop();
      }
      else
      {
        cout << "Invalid" << endl;
      }
    }
  }

  return 0;
}
