#include <bits/stdc++.h>
using namespace std;

bool check_elimination(string str)
{
  stack<char> st;
  for (char ch : str)
  {
    if (!st.empty() && st.top() == '0' && ch == '1')
    {
      st.pop();
    }
    else
    {
      st.push(ch);
    }
  }
  return st.empty();
}

int main()
{
  int times;
  cin >> times;
  for (int i = 0; i < times; i++)
  {
    string str;
    cin >> str;
    if (check_elimination(str))
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
