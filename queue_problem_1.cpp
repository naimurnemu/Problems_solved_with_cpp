#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
  list<int> l;

  void push(int val)
  {
    l.push_back(val);
  }

  void pop()
  {
    l.pop_front();
  }

  int front()
  {
    return l.front();
  }

  int size()
  {
    return l.size();
  }

  bool empty()
  {
    return l.empty();
  }
};

int main()
{
  int len;
  cin >> len;
  MyQueue q;

  for (int i = 0; i < len; i++)
  {
    int item;
    cin >> item;
    q.push(item);
  }
  int index;
  cin >> index;

  MyQueue new_q;
  int i = 1;
  while (!q.empty())
  {
    if (i != index)
    {
      new_q.push(q.front());
    }
    i++;
    q.pop();
  }

  while (!new_q.empty())
  {
    cout << new_q.front() << " ";
    new_q.pop();
  }

  return 0;
}
