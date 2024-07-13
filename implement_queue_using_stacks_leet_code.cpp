#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
  stack<int> st;
  MyQueue()
  {
  }

  void push(int x)
  {
    st.push(x);
  }

  int pop()
  {
    stack<int> newSt;
    int last = NULL;

    while (!st.empty())
    {
      int current = st.top();
      st.pop();
      if (st.empty())
      {
        last = current;
        break;
      }
      newSt.push(current);
    }
    while (!newSt.empty())
    {
      st.push(newSt.top());
      newSt.pop();
    }
    return last;
  }

  int peek()
  {
    stack<int> newSt;
    int last = NULL;

    while (!st.empty())
    {
      int current = st.top();
      st.pop();
      if (st.empty())
      {
        last = current;
      }
      newSt.push(current);
    }
    while (!newSt.empty())
    {
      st.push(newSt.top());
      newSt.pop();
    }
    return last;
  }

  bool empty()
  {
    return st.empty();
  }
};