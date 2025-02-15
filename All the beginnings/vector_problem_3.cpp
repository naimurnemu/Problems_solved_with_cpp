#include <bits/stdc++.h>
using namespace std;

int main()
{
  int queries;
  cin >> queries;
  vector<int> v;

  for (int i = 0; i < queries; i++)
  {
    int x, element;
    cin >> x >> element;
    if (x == 1)
    {
      if (v.empty())
        v.push_back(element);
      else
        v.insert(v.begin() + 1, element);
    }
    if (x == 2)
    {
      if (v.empty())
        v.push_back(element);
      else
        v.insert(v.end() - 1, element);
    }
  }

   for (auto item : v)
  {
    cout << item << " ";
  }

  return 0;
}
