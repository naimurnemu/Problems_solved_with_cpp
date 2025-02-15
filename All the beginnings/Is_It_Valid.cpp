#include <bits/stdc++.h>
using namespace std;

bool check_validity(string str)
{
  stack<char> st;
  for (char ch : str)
  {
    if (!st.empty() && ((ch == '0' && st.top() == '1') || (ch == '1' && st.top() == '0')))
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
    if (check_validity(str))
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
