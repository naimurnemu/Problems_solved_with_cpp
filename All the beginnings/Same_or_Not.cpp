#include <bits/stdc++.h>
using namespace std;

int main()
{
  int stack_size, queue_size;
  cin >> stack_size >> queue_size;

  stack<int> st;
  for (int i = 0; i < stack_size; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }

  queue<int> q;
  for (int i = 0; i < queue_size; i++)
  {
    int x;
    cin >> x;
    q.push(x);
  }

  bool flag = true;

  if (stack_size == queue_size && !st.empty() && !q.empty())
  {
    for (int i = 0; i < queue_size; i++)
    {
      if (st.top() != q.front())
      {
        flag = false;
        break;
      }
      st.pop();
      q.pop();
    }
  }
  else
  {
    flag = false;
  }

  flag ? cout << "YES" : cout << "NO";

  return 0;
}
