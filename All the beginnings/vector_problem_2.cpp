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

  reverse(v.begin(), v.end());

  vector<int> new_v;
  int sum = 0;

  for (int i = 0; i < len; i++)
  {
    new_v.push_back(sum);
    sum += v[i];
  }

  reverse(new_v.begin(), new_v.end());

  for (auto item : new_v)
  {
    cout << item << " ";
  }

  return 0;
}
