#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
  vector<int> v;

  void push(int val)
  {
    v.push_back(val);
  }

  void pop()
  {
    v.pop_back();
  }

  int top()
  {
    return v.back();
  }

  int size()
  {
    return v.size();
  }

  bool empty()
  {
    return v.empty();
  }
};
int main()
{
  int len;
  cin >> len;
  MyStack st;
  for (int i = 0; i < len; i++)
  {
    int item;
    cin >> item;
    st.push(item);
  }

  int k;
  cin >> k;
  while (st.size() > k)
  {
    st.pop();
  }

  cout << st.top();

  return 0;
}
