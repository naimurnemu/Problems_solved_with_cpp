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

  stack<int> st;
  for (int i = len - 1; i >= 0; i--)
  {
    int max = 0;
    for (int j = i + 1; j < len; j++)
    {
      if (v[j] > max)
        max = v[j];
    }
    st.push(max);
  }

  while (!st.empty()) {
    cout << st.top()<< " ";
    st.pop();
  }
  

  return 0;
}
