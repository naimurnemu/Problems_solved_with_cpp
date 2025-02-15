#include <bits/stdc++.h>
using namespace std;

int main()
{
  int len;
  cin >> len;
  vector<int> v(len);

  for (int i = 0; i < len; i++)
  {
    cin >> v[i];
  }

  for (int i = 1; i < len - 1; i++)
  {
    if (v[i] < v[i - 1] && i > v[i] < v[i + 1])
    {
      cout << v[i] << endl;
    }
  }

  return 0;
}
