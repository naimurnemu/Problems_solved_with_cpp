#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
  list<int> ls;
  void push(int val)
  {
    ls.push_back(val);
  }
  void pop()
  {
    ls.pop_back();
  }
  int top()
  {
    return ls.back();
  }
  int size()
  {
    return ls.size();
  }
  bool empty()
  {
    return ls.empty();
  }
};

class MyQueue
{
public:
  list<int> lq;

  void push(int val)
  {
    lq.push_back(val);
  }
  void pop()
  {
    lq.pop_front();
  }
  int front()
  {
    return lq.front();
  }
  int size()
  {
    return lq.size();
  }
  bool empty()
  {
    return lq.empty();
  }
};

int main()
{
  int stack_size, queue_size;
  cin >> stack_size >> queue_size;

  MyStack st;
  for (int i = 0; i < stack_size; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }

  MyQueue q;
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
