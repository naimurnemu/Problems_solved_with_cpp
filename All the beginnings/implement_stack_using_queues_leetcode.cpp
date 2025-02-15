#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
  MyStack()
  {
  }
  queue<int> q;

  void push(int x)
  {
    q.push(x);
  }

  int pop()
  {
    queue<int> newQ;
    int last = NULL;
    while (!q.empty())
    {
      int current = q.front();
      q.pop();
      if (q.empty())
      {
        last = current;
        break;
      }
      newQ.push(current);
    }
    q = newQ;
    return last;
  }

  int top()
  {
    queue<int> newQ;
    int last = NULL;
    while (!q.empty())
    {
      int current = q.front();
      q.pop();
      if (q.empty())
      {
        last = current;
      }
      newQ.push(current);
    }
    q = newQ;
    return last;
  }

  bool empty()
  {
    return q.empty();
  }
};
